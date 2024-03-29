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

#ifndef __SHOP_H__
#define __SHOP_H__

#include <stdint.h>
#include <string>
#include "characterinfoscreen.h"

class InventoryItem;
class Item;
class CNPC;

namespace currency
{
    enum currency
    {
        COPPER, // 100 COPPER == 1 SILVER
        SILVER, // 100 SILVER == 1 GOLD
        GOLD
    };
    std::string getLongTextString(std::uint32_t coins );
    void exchangeCoins(std::uint32_t &copper, std::uint32_t &silver, std::uint32_t &gold, std::uint32_t &coins );
    std::string convertCoinsToString(currency currency, std::uint32_t coins );
}

class Shop : public FramesBase
{
    public:
        Shop( Player *player_, CNPC *shopkeeper_);
        void loadShopkeeperInventory();
        void loadTextures();

        void toggle();

        void draw( int mouseX, int mouseY );
        void drawItems();
        void drawTabs();
        void drawItemTooltip( int mouseX, int mouseY );
        void drawFloatingSelection( int mouseX, int mouseY );

        void clicked( int mouseX, int mouseY, uint8_t mouseState );

        size_t getItemTab( Item *item );

        bool isOnSlotsScreen( int x, int y );
        bool isPositionFree( size_t invPosX, size_t invPosY, size_t curTab ) const;

        bool hasFloatingSelection() const;
        bool hasSufficientSpaceAt( size_t inventoryPosX, size_t inventoryPosY, size_t itemSizeX, size_t itemSizeY, size_t itemTab ) const;

        void sellToShop( InventoryItem *sellItem, bool givePlayerMoney );
        void buyFromShop();

        void addItem( Item *item );
        void insertItemAt( InventoryItem *newItem, size_t foundX, size_t foundY, size_t itemTab );
        InventoryItem* getItemAt( size_t invPosX, size_t invPosY, size_t itemTab );
        void removeItem( InventoryItem *inventoryItem );

        void unsetFloatingSelection();
        InventoryItem *getFloatingSelection() const;

    private:
		friend class CZone; // just for now to be able to save the items
        uint8_t currentTab;

        GLFT_Font *itemStackFont;

		size_t backpackFieldWidth;
		size_t backpackFieldHeight;
		size_t backpackSeparatorWidth;
		size_t backpackSeparatorHeight;
		size_t backpackOffsetX;
		size_t backpackOffsetY;
		size_t numSlotsX;
		size_t numSlotsY;

		CTexture textures;

		sTabs tabs[3];

		bool ***slotUsed;

		InventoryItem *floatingSelection;

		Player *player;
		CNPC *shopkeeper;

		std::vector<InventoryItem*> shopkeeperInventory[3];
};

namespace DawnInterface
{
	Shop *addShop();
}

#endif
