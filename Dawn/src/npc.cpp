/**
    Copyright (C) 2009,2010,2011  Dawn - 2D roleplaying game

    This file is a part of the dawn-rpg project <https://github.com/frusen/Dawn>.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>. **/

#include "npc.h"
#include "player.h"
#include "luainterface.h"
#include "callindirection.h"
#include "globals.h"
#include "random.h"
#include <cmath>
#include <algorithm>

CNPC::CNPC ( int _x_spawn_pos, int _y_spawn_pos, int _NPC_id, int _seconds_to_respawn, int _do_respawn ) {
	Init( x_spawn_pos, y_spawn_pos );
	alive = true;
	current_texture = 1; // this will be altered later on to draw what animation frame we want to draw.
	respawn_thisframe = 0.0f;
	respawn_lastframe = 0.0f; // helps us count when to respawn the NPC.
	wander_thisframe = 0.0f;
	wander_lastframe = 0.0f; // helping us decide when the mob will wander.
	wander_every_seconds = 3; // this mob wanders every 1 seconds.
	wandering = false;
	MovingDirection = STOP;

	remainingMovePoints = 0;
	direction_texture = S;
	attitudeTowardsPlayer = Attitude::NEUTRAL;
	chasingPlayer = false;
	setTarget( NULL );
	markedAsDeleted = false;
	lastPathCalculated = 0;
}

CNPC::~CNPC()
{
	for ( size_t curEventHandlerNr = 0; curEventHandlerNr < onDieEventHandlers.size(); ++curEventHandlerNr ) {
		delete onDieEventHandlers[ curEventHandlerNr ];
	}
	onDieEventHandlers.clear();
}

void CNPC::setSpawnInfo( int _x_spawn_pos, int _y_spawn_pos, int _seconds_to_respawn, int _do_respawn ) {
	x_pos = _x_spawn_pos;
	y_pos = _y_spawn_pos;
	x_spawn_pos = _x_spawn_pos;
	y_spawn_pos = _y_spawn_pos;
	do_respawn = _do_respawn;
	seconds_to_respawn = _seconds_to_respawn;
}

Direction CNPC::GetDirection()
{
	Player *player = Globals::getPlayer();
	if ( chasingPlayer == true ) {
		if ( waypoints.size() > 0 ) {
			// follow waypoints
			Point nextWP = waypoints.back();
			return getDirectionTowardsWaypointAt( nextWP.x, nextWP.y );
		} else {
			// run directly towards the player
			return getDirectionTowards( (player->x_pos + player->getWidth()) / 2, (player->y_pos + player->getHeight()) / 2 );
		}
	}
	if ( wandering ) {
		return WanderDirection;
	} else {
		return MovingDirection;
	}
}

void CNPC::chasePlayer( CCharacter *player )
{
    chasingPlayer = true;
	setTarget( player );

	// This can be used to deactivate pathfinding, because it might cause performance problems
	bool dontUsePathfinding = false;
	if ( ! dontUsePathfinding ) {
		// check whether we need to calculate a path for this NPC
		// if so calculate the path and set a list of waypoints

		// don't calculate a path too often
		bool neverCalculatePath = dontUsePathfinding || ( SDL_GetTicks()-lastPathCalculated < 2000 );
		// don't calculate a path if we are very close to the player
		int rawDistance = ((std::sqrt(std::pow(getXPos()+getWidth()/2-(player->getXPos()+player->getWidth()/2),2)
		                             + std::pow(getYPos()+getHeight()/2-(player->getYPos()+player->getHeight()/2),2)))
						  - std::sqrt(std::pow((getWidth()+player->getWidth())/2,2)
		                              + std::pow((getHeight()+player->getHeight())/2,2)));
		if ( rawDistance < 50 ) {
			waypoints.clear();
			neverCalculatePath = true;
		}
		bool calculatePath = ( waypoints.size() == 0 );
		// recalculate the path if the player has moved too far from the endpoint of the path
		if ( ! calculatePath && ! neverCalculatePath ) {
			Point lastPoint = waypoints.front();
			if ( std::pow(lastPoint.x-player->getXPos(),2)+std::pow(lastPoint.y-player->getYPos(),2) > std::max(waypoints.size()*100,static_cast<size_t>(1000)) ) {
				calculatePath = true;
			}
		}
		if ( calculatePath && ! neverCalculatePath ) {

			waypoints = aStar( Point(getXPos(),getYPos()), Point(player->getXPos()+player->getWidth()/2, player->getYPos()+player->getHeight()/2), getWidth(), getHeight() );
			if ( waypoints.size() > 0 ) {
				waypoints.pop_back();
				lastPathCalculated = SDL_GetTicks();
			}
	    }
	}
}

bool CNPC::canBeDamaged() const
{
	// FRIENDLY characters (quest characters etc.) can't be damaged
	return attitudeTowardsPlayer != Attitude::FRIENDLY;
}

void CNPC::Damage(int amount, bool criticalHit)
{
	// don't damage quest characters etc.
	if ( ! canBeDamaged() )
		return;

	chasePlayer( Globals::getPlayer() );
	CCharacter::Damage( amount, criticalHit );
}

void CNPC::Die()
{
	CCharacter::Die();
	dropItems();
	alive = false;
	respawn_lastframe = SDL_GetTicks();
	onDie();
}

void CNPC::Draw()
{
	CalculateStats(); // always calculate the stats of the NPC.
	cleanupActiveSpells();
	cleanupCooldownSpells();
	direction_texture = GetDirectionTexture();
	ActivityType::ActivityType curActivity = getCurActivity();
	if ( alive == true || curActivity == ActivityType::Dying ) {
		int drawX = getXPos();
		int drawY = getYPos();
		if ( getUseBoundingBox() ) {
			drawX -= getBoundingBoxX();
			drawY -= getBoundingBoxY();
		}

        float color[] = { 1.0f, 1.0f, 1.0f, 1.0f };

		// if sneaking and character is less than 260 pixels away we draw at 0.5 and with darker colors (shade)
        // if NPC is invisible or sneaking with more than 260 pixels away we don't draw the NPC at all.
        // if the character can see invisible or sneaking, we draw with 0.5 transparency.
        Player *player = Globals::getPlayer();
        double distance = sqrt( pow((getXPos()+getWidth()/2) - (player->getXPos()+player->getWidth()/2),2)
                           +pow((getYPos()+getHeight()/2) - (player->getYPos()+player->getHeight()/2),2) );

		if ( isSneaking() == true && ( distance < 260 || player->canSeeSneaking() == true ) ) {
		    color[0] = 0.7f;
		    color[1] = 0.7f;
		    color[2] = 0.7f;
		    color[3] = 0.5f;
		}

		if ( isInvisible() == true && player->canSeeInvisible() == true ) {
		    color[3] = 0.5f;
		}

		if ( ( isInvisible() == true && player->canSeeInvisible() == false ) || ( isSneaking() == true && distance > 260 && player->canSeeSneaking() == false ) ) {
		    return;
		}

		if ( curActivity == ActivityType::Dying ) {
		    if ( reduceDyingTranspFrame < SDL_GetTicks() - 50 ) {
		        dyingTransparency -= 0.025;
                reduceDyingTranspFrame = SDL_GetTicks();
		    }
		    color[3] = dyingTransparency;
		}

		texture[ static_cast<size_t>(curActivity) ]->DrawTexture(drawX,drawY,direction_texture, color[3], color[0], color[1], color[2]);
	}
}

void CNPC::Respawn()
{
	if (alive == false && do_respawn == true) {
		respawn_thisframe = SDL_GetTicks();
		if ((respawn_thisframe-respawn_lastframe) > (seconds_to_respawn * 1000)) {
			setTarget( NULL );
			alive = true;
			chasingPlayer = false;
			waypoints.clear();
			x_pos = x_spawn_pos;
			y_pos = y_spawn_pos;
			respawn_thisframe = 0.0f;
			respawn_lastframe = 0.0f;
			setCurrentHealth( getModifiedMaxHealth() );
			setCurrentMana( getModifiedMaxMana() );
			Init( x_spawn_pos, y_spawn_pos );
        }
	}
}


void CNPC::Wander()
{
	if (wandering) {
		if (wander_points_left > 0) {
			// checking if character is moving more than the wander_radius. if he does we'll stop him.
			// probably is some other function we could use here that doesnt require as much power... /arnestig
			if (sqrt((pow(x_pos - x_spawn_pos,2)+pow(y_pos - y_spawn_pos,2))) < getWanderRadius() ) {
				wander_points_left--;
			} else {
				wander_lastframe = SDL_GetTicks();
				wandering = false;
				WanderDirection = STOP;
			}
		} else {
			wander_lastframe = SDL_GetTicks();
			wandering = false;
			WanderDirection = STOP;
		}
	} else {
		wander_thisframe = SDL_GetTicks();
		if ((wander_thisframe-wander_lastframe) > (wander_every_seconds*1000)) {
			wandering = true;
			wander_points_left = RNG::randomSizeT(10,59);  // how far will the NPC wander?
			WanderDirection = static_cast<Direction>( RNG::randomSizeT(1,8) );  // random at which direction NPC will go.
		}
	}
}

void CNPC::Move()
{
    std::vector<CSpellActionBase*> curSpellbook = getSpellbook();
    for ( size_t spellIndex = 0; spellIndex < curSpellbook.size(); spellIndex++ ) {

        /// \todo better AI to determine what spells to be cast.
        ///
        /// As of now, we just check if the spell is within range,
        /// has enough mana and isn't on cooldown...
        bool castableSpell = true;

        if ( dynamic_cast<GeneralBuffSpell*>( curSpellbook[ spellIndex ] ) == NULL ) {
            castableSpell = false;
        }

        if ( dynamic_cast<CSpell*>( curSpellbook[ spellIndex ] ) != NULL ) {
            if ( curSpellbook[ spellIndex ]->getSpellCost() > getCurrentMana() )	{
                /// can't cast. not enough mana.
                castableSpell = false;
            }
        }

        if ( curSpellbook[ spellIndex ]->getEffectType() != EffectType::SelfAffectingSpell && getTarget() != NULL ) {
            uint16_t distance = sqrt( pow( ( getXPos() + getWidth() / 2 ) - ( getTarget()->getXPos() + getTarget()->getWidth() / 2 ),2) + pow( ( getYPos() + getHeight() / 2 ) - ( getTarget()->getYPos() + getTarget()->getHeight() / 2 ),2) );
            if ( curSpellbook[ spellIndex ]->isInRange( distance ) == false ) {
                /// can't cast, not in range.
                castableSpell = false;
            }
        }

        for (size_t curSpell = 0; curSpell < cooldownSpells.size(); curSpell++)
        {
            if ( cooldownSpells[ curSpell ].first->getID() == curSpellbook[ spellIndex ]->getID() )
            {
                if ( SDL_GetTicks() < cooldownSpells[curSpell].second + curSpellbook[ spellIndex ]->getCooldown() * 1000 )
                {
                    /// can't cast, spell has a cooldown on it.
                    castableSpell = false;
                }
            }
        }

        if ( castableSpell == true ) {
            CSpellActionBase *curAction = NULL;

            EffectType::EffectType effectType = curSpellbook[spellIndex]->getEffectType();

            if ( effectType == EffectType::SingleTargetSpell
                     && getTarget() != NULL ) {
                curAction = curSpellbook[spellIndex]->cast( this, getTarget() );
            } else if ( effectType == EffectType::SelfAffectingSpell ) {
                curAction = curSpellbook[spellIndex]->cast( this, this );
            }

            if ( curAction != NULL ) {
                castSpell( dynamic_cast<CSpellActionBase*>( curAction ) );
            }
        }
    }

	Player *player = Globals::getPlayer();
	double distance = sqrt( pow((getXPos()+getWidth()/2) - (player->getXPos()+player->getWidth()/2),2)
		                       +pow((getYPos()+getHeight()/2) - (player->getYPos()+player->getHeight()/2),2) );
    // if player is inside agro range of NPC, we set NPC to attack mode.
    if ( distance < 200 && getAttitude() == Attitude::HOSTILE && ( player->isInvisible() == false || canSeeInvisible() == true ) && ( player->isSneaking() == false || canSeeSneaking() == true ) )
    {
	chasePlayer( player );
    } else if ( distance < 80 && getAttitude() == Attitude::HOSTILE && player->isSneaking() == true ) { // do this if player is sneaking and NPC is near the character.
	chasePlayer( Globals::getPlayer() );
    }

    if ( mayDoAnythingAffectingSpellActionWithoutAborting() && chasingPlayer == true ) {
        std::vector<CSpellActionBase*> curSpellbook = getSpellbook();
        for ( size_t spellIndex = 0; spellIndex < curSpellbook.size(); spellIndex++ ) {

            /// \todo better AI to determine what spells to be cast.
            ///
            /// As of now, we just check if the spell is within range,
            /// has enough mana and isn't on cooldown...
            bool castableSpell = true;

            if ( dynamic_cast<CAction*>( curSpellbook[ spellIndex ] ) != NULL ) {
                if ( curSpellbook[ spellIndex ]->getSpellCost() > getCurrentFatigue() ) {
                    /// can't cast. cost more fatigue than we can afford.
                    castableSpell = false;
                }
            } else if ( dynamic_cast<CSpell*>( curSpellbook[ spellIndex ] ) != NULL ) {
                if ( curSpellbook[ spellIndex ]->getSpellCost() > getCurrentMana() )	{
                    /// can't cast. not enough mana.
                    castableSpell = false;
                }
            }

            if ( curSpellbook[ spellIndex ]->getEffectType() != EffectType::SelfAffectingSpell && getTarget() != NULL ) {
                uint16_t distance = sqrt( pow( ( getXPos() + getWidth() / 2 ) - ( getTarget()->getXPos() + getTarget()->getWidth() / 2 ),2) + pow( ( getYPos() + getHeight() / 2 ) - ( getTarget()->getYPos() + getTarget()->getHeight() / 2 ),2) );
                if ( curSpellbook[ spellIndex ]->isInRange( distance ) == false ) {
                    /// can't cast, not in range.
                    castableSpell = false;
                }
            }

            for (size_t curSpell = 0; curSpell < cooldownSpells.size(); curSpell++)
            {
                if ( cooldownSpells[ curSpell ].first->getID() == curSpellbook[ spellIndex ]->getID() )
                {
                    if ( SDL_GetTicks() < cooldownSpells[curSpell].second + curSpellbook[ spellIndex ]->getCooldown() * 1000 )
                    {
                        /// can't cast, spell has a cooldown on it.
                        castableSpell = false;
                    }
                }
            }

            if ( castableSpell == true ) {
                CSpellActionBase *curAction = NULL;

                EffectType::EffectType effectType = curSpellbook[spellIndex]->getEffectType();

                if ( effectType == EffectType::SingleTargetSpell
                         && getTarget() != NULL ) {
                    curAction = curSpellbook[spellIndex]->cast( this, getTarget() );
                } else if ( effectType == EffectType::SelfAffectingSpell ) {
                    curAction = curSpellbook[spellIndex]->cast( this, this );
                }

                if ( curAction != NULL ) {
                    castSpell( dynamic_cast<CSpellActionBase*>( curAction ) );
                }
            }
        }
    }
	// another call to chasePlayer is necessary in order to (re-) calculate waypoints for moving.
	// Note: The system of moving with the standard move function towards waypoints only works good
	//       if almost every move is only 1 pixel (or 0), i.e. it should work well on all computers
	//       that have a decent fps.
	if ( chasingPlayer )
		chasePlayer( player );
	CCharacter::Move();
	if ( waypoints.size() > 0 ) {
		Point nextWP = waypoints.back();
		if ( getXPos() == nextWP.x && getYPos() == nextWP.y ) {
			waypoints.pop_back();
		}
	}
}

void CNPC::markAsDeleted()
{
	markedAsDeleted = true;
}
bool CNPC::isMarkedAsDeletable() const
{
	return markedAsDeleted;
}

void CNPC::addOnDieEventHandler( CallIndirection *eventHandler )
{
	onDieEventHandlers.push_back( eventHandler );
}

bool CNPC::hasOnDieEventHandler() const
{
    if ( onDieEventHandlers.size() > 0 ) {
        return true;
    } else {
        return false;
    }
}

void CNPC::onDie()
{
	for ( size_t curEventHandlerNr=0; curEventHandlerNr < onDieEventHandlers.size(); ++curEventHandlerNr ) {
		onDieEventHandlers[ curEventHandlerNr ]->call();
	}
}

void CNPC::setAttitude( Attitude::Attitude attitude )
{
	this->attitudeTowardsPlayer = attitude;
}

Attitude::Attitude CNPC::getAttitude() const
{
	return this->attitudeTowardsPlayer;
}

static std::string attitudeToString( Attitude::Attitude attitude )
{
	switch ( attitude ) {
		case Attitude::HOSTILE:
			return "HOSTILE";
		case Attitude::NEUTRAL:
			return "NEUTRAL";
		case Attitude::FRIENDLY:
			return "FRIENDLY";
		default:
			dawn_debug_fatal("Attribute not handled in attitudeToString");
			abort();
	}
}

std::string CNPC::getLuaSaveText() const
{
	std::ostringstream oss;
	std::string objectName = "curNPC";
	oss << "local " << objectName << " = DawnInterface.addMobSpawnPoint( \"" << getClassID() << "\", "
	                                        << x_spawn_pos << ", "
	                                        << y_spawn_pos << ", "
	                                        << seconds_to_respawn << ", "
	                                        << do_respawn << " );" << std::endl;
	// add onDieEventHandlers for this npc
	for ( size_t curOnDieHandlerNr=0; curOnDieHandlerNr<onDieEventHandlers.size(); ++curOnDieHandlerNr ) {
		LuaCallIndirection *luaHandler = dynamic_cast<LuaCallIndirection*>( onDieEventHandlers[curOnDieHandlerNr ] );
		if( luaHandler != NULL )
		{
			// a real LuaCallIndirection
			oss << objectName << ":addOnDieEventHandler( " << DawnInterface::getItemReferenceRestore( luaHandler ) << " );" << std::endl;
		}
		else
		{
			abort();
			dawn_debug_fatal( "unhandled event handler in CNPC::getLuaSaveText()" );
			abort();
		}
	}

	oss << objectName << ":setAttitude( Attitude." << attitudeToString( attitudeTowardsPlayer ) << " );" << std::endl;

	return oss.str();
}

std::string CNPC::getLuaEditorSaveText() const
{
	std::ostringstream oss;
	std::string objectName = "curNPC";
	oss << objectName << " = DawnInterface.addMobSpawnPoint( \"" << getClassID() << "\", "
	                                        << x_spawn_pos << ", "
	                                        << y_spawn_pos << ", "
	                                        << seconds_to_respawn << ", "
	                                        << do_respawn << " );" << std::endl;

	oss << objectName << ":setAttitude( Attitude." << attitudeToString( attitudeTowardsPlayer ) << " );" << std::endl;
	oss << objectName << ":setName( \"" << getName() << "\" );" << std::endl;

	return oss.str();
}



