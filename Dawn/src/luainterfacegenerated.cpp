/*
** Lua binding: LuaInterface
** Generated automatically by tolua++-1.0.92 on Fri Oct  1 12:41:16 2021.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_LuaInterface_open (lua_State* tolua_S);

#include "luainterface.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"GeneralRayDamageSpell");
 tolua_usertype(tolua_S,"ConfigurableSpell");
 tolua_usertype(tolua_S,"ConfigurableAction");
 tolua_usertype(tolua_S,"CSpellActionBase");
 tolua_usertype(tolua_S,"InteractionRegion");
 tolua_usertype(tolua_S,"Item");
 tolua_usertype(tolua_S,"GeneralHealingSpell");
 tolua_usertype(tolua_S,"AdjacencyEquivalenceClass");
 tolua_usertype(tolua_S,"Quest");
 tolua_usertype(tolua_S,"RangedDamageAction");
 tolua_usertype(tolua_S,"LuaCallIndirection");
 tolua_usertype(tolua_S,"MeleeDamageAction");
 tolua_usertype(tolua_S,"TextWindow");
 tolua_usertype(tolua_S,"TileSet");
 tolua_usertype(tolua_S,"InteractionPoint");
 tolua_usertype(tolua_S,"CallIndirection");
 tolua_usertype(tolua_S,"GeneralAreaDamageSpell");
 tolua_usertype(tolua_S,"GeneralBoltDamageSpell");
 tolua_usertype(tolua_S,"GeneralBuffSpell");
 tolua_usertype(tolua_S,"Player");
 tolua_usertype(tolua_S,"CNPC");
 tolua_usertype(tolua_S,"CSpell");
 tolua_usertype(tolua_S,"GeneralDamageSpell");
 tolua_usertype(tolua_S,"CAction");
 tolua_usertype(tolua_S,"CCharacter");
 tolua_usertype(tolua_S,"Shop");
}

/* function: Configuration::setResolution */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Configuration_setResolution00
static int tolua_LuaInterface_Configuration_setResolution00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int screenWidth = ((int)  tolua_tonumber(tolua_S,1,0));
  int screenHeight = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   Configuration::setResolution(screenWidth,screenHeight);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setResolution'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Configuration::setBpp */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Configuration_setBpp00
static int tolua_LuaInterface_Configuration_setBpp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int bpp = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   Configuration::setBpp(bpp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBpp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Configuration::useFullscreen */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Configuration_useFullscreen00
static int tolua_LuaInterface_Configuration_useFullscreen00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isboolean(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool fullscreenEnabled = ((bool)  tolua_toboolean(tolua_S,1,0));
  {
   Configuration::useFullscreen(fullscreenEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'useFullscreen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Configuration::useSound */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Configuration_useSound00
static int tolua_LuaInterface_Configuration_useSound00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isboolean(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool soundEnabled = ((bool)  tolua_toboolean(tolua_S,1,0));
  {
   Configuration::useSound(soundEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'useSound'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Configuration::showDebugStdout */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Configuration_showDebugStdout00
static int tolua_LuaInterface_Configuration_showDebugStdout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isboolean(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool debug_stdout = ((bool)  tolua_toboolean(tolua_S,1,0));
  {
   Configuration::showDebugStdout(debug_stdout);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'showDebugStdout'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Configuration::showDebugFileout */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Configuration_showDebugFileout00
static int tolua_LuaInterface_Configuration_showDebugFileout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isboolean(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool debug_fileout = ((bool)  tolua_toboolean(tolua_S,1,0));
  {
   Configuration::showDebugFileout(debug_fileout);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'showDebugFileout'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Configuration::showInfoMessages */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Configuration_showInfoMessages00
static int tolua_LuaInterface_Configuration_showInfoMessages00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isboolean(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool show_info_messages = ((bool)  tolua_toboolean(tolua_S,1,0));
  {
   Configuration::showInfoMessages(show_info_messages);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'showInfoMessages'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: Configuration::showWarningMessages */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Configuration_showWarningMessages00
static int tolua_LuaInterface_Configuration_showWarningMessages00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isboolean(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool show_warn_messages = ((bool)  tolua_toboolean(tolua_S,1,0));
  {
   Configuration::showWarningMessages(show_warn_messages);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'showWarningMessages'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: baseOnType of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_baseOnType00
static int tolua_LuaInterface_CCharacter_baseOnType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  std::string otherType = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'baseOnType'", NULL);
#endif
  {
   self->baseOnType(otherType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'baseOnType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStrength of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setStrength00
static int tolua_LuaInterface_CCharacter_setStrength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newStrength = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStrength'", NULL);
#endif
  {
   self->setStrength(newStrength);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStrength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStrength of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_getStrength00
static int tolua_LuaInterface_CCharacter_getStrength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCharacter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCharacter* self = (const CCharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStrength'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getStrength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStrength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: modifyStrength of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_modifyStrength00
static int tolua_LuaInterface_CCharacter_modifyStrength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int strengthModifier = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'modifyStrength'", NULL);
#endif
  {
   self->modifyStrength(strengthModifier);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'modifyStrength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDexterity of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setDexterity00
static int tolua_LuaInterface_CCharacter_setDexterity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newDexterity = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDexterity'", NULL);
#endif
  {
   self->setDexterity(newDexterity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDexterity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDexterity of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_getDexterity00
static int tolua_LuaInterface_CCharacter_getDexterity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCharacter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCharacter* self = (const CCharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDexterity'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getDexterity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDexterity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: modifyDexterity of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_modifyDexterity00
static int tolua_LuaInterface_CCharacter_modifyDexterity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int dexterityModifier = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'modifyDexterity'", NULL);
#endif
  {
   self->modifyDexterity(dexterityModifier);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'modifyDexterity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVitality of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setVitality00
static int tolua_LuaInterface_CCharacter_setVitality00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newVitality = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVitality'", NULL);
#endif
  {
   self->setVitality(newVitality);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVitality'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVitality of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_getVitality00
static int tolua_LuaInterface_CCharacter_getVitality00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCharacter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCharacter* self = (const CCharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVitality'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getVitality();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVitality'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: modifyVitality of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_modifyVitality00
static int tolua_LuaInterface_CCharacter_modifyVitality00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int vitalityModifier = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'modifyVitality'", NULL);
#endif
  {
   self->modifyVitality(vitalityModifier);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'modifyVitality'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIntellect of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setIntellect00
static int tolua_LuaInterface_CCharacter_setIntellect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newIntellect = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIntellect'", NULL);
#endif
  {
   self->setIntellect(newIntellect);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIntellect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIntellect of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_getIntellect00
static int tolua_LuaInterface_CCharacter_getIntellect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCharacter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCharacter* self = (const CCharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIntellect'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getIntellect();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIntellect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: modifyIntellect of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_modifyIntellect00
static int tolua_LuaInterface_CCharacter_modifyIntellect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int intellectModifier = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'modifyIntellect'", NULL);
#endif
  {
   self->modifyIntellect(intellectModifier);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'modifyIntellect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setWisdom of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setWisdom00
static int tolua_LuaInterface_CCharacter_setWisdom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newWisdom = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWisdom'", NULL);
#endif
  {
   self->setWisdom(newWisdom);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWisdom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWisdom of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_getWisdom00
static int tolua_LuaInterface_CCharacter_getWisdom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCharacter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCharacter* self = (const CCharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWisdom'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getWisdom();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWisdom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: modifyWisdom of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_modifyWisdom00
static int tolua_LuaInterface_CCharacter_modifyWisdom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int wisdomModifier = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'modifyWisdom'", NULL);
#endif
  {
   self->modifyWisdom(wisdomModifier);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'modifyWisdom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxHealth of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setMaxHealth00
static int tolua_LuaInterface_CCharacter_setMaxHealth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newMaxHealth = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxHealth'", NULL);
#endif
  {
   self->setMaxHealth(newMaxHealth);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxHealth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxHealth of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_getMaxHealth00
static int tolua_LuaInterface_CCharacter_getMaxHealth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCharacter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCharacter* self = (const CCharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxHealth'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxHealth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxHealth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: modifyMaxHealth of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_modifyMaxHealth00
static int tolua_LuaInterface_CCharacter_modifyMaxHealth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int maxHealthModifier = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'modifyMaxHealth'", NULL);
#endif
  {
   self->modifyMaxHealth(maxHealthModifier);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'modifyMaxHealth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxMana of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setMaxMana00
static int tolua_LuaInterface_CCharacter_setMaxMana00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newMaxMana = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxMana'", NULL);
#endif
  {
   self->setMaxMana(newMaxMana);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxMana'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxMana of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_getMaxMana00
static int tolua_LuaInterface_CCharacter_getMaxMana00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCharacter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCharacter* self = (const CCharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxMana'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxMana();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxMana'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: modifyMaxMana of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_modifyMaxMana00
static int tolua_LuaInterface_CCharacter_modifyMaxMana00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int maxManaModifier = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'modifyMaxMana'", NULL);
#endif
  {
   self->modifyMaxMana(maxManaModifier);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'modifyMaxMana'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxFatigue of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setMaxFatigue00
static int tolua_LuaInterface_CCharacter_setMaxFatigue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newMaxFatigue = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxFatigue'", NULL);
#endif
  {
   self->setMaxFatigue(newMaxFatigue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxFatigue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxFatigue of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_getMaxFatigue00
static int tolua_LuaInterface_CCharacter_getMaxFatigue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCharacter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCharacter* self = (const CCharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxFatigue'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxFatigue();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxFatigue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: modifyMaxFatigue of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_modifyMaxFatigue00
static int tolua_LuaInterface_CCharacter_modifyMaxFatigue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int maxFatigueModifier = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'modifyMaxFatigue'", NULL);
#endif
  {
   self->modifyMaxFatigue(maxFatigueModifier);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'modifyMaxFatigue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setExperienceValue of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setExperienceValue00
static int tolua_LuaInterface_CCharacter_setExperienceValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int experienceValue = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setExperienceValue'", NULL);
#endif
  {
   self->setExperienceValue(experienceValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setExperienceValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNumMoveTexturesPerDirection of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setNumMoveTexturesPerDirection00
static int tolua_LuaInterface_CCharacter_setNumMoveTexturesPerDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  ActivityType::ActivityType activity = ((ActivityType::ActivityType) (int)  tolua_tonumber(tolua_S,2,0));
  int numTextures = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNumMoveTexturesPerDirection'", NULL);
#endif
  {
   self->setNumMoveTexturesPerDirection(activity,numTextures);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNumMoveTexturesPerDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMoveTexture of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setMoveTexture00
static int tolua_LuaInterface_CCharacter_setMoveTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  ActivityType::ActivityType activity = ((ActivityType::ActivityType) (int)  tolua_tonumber(tolua_S,2,0));
  int direction = ((int)  tolua_tonumber(tolua_S,3,0));
  int index = ((int)  tolua_tonumber(tolua_S,4,0));
  std::string filename = ((std::string)  tolua_tocppstring(tolua_S,5,0));
  int textureOffsetX = ((int)  tolua_tonumber(tolua_S,6,0));
  int textureOffsetY = ((int)  tolua_tonumber(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMoveTexture'", NULL);
#endif
  {
   self->setMoveTexture(activity,direction,index,filename,textureOffsetX,textureOffsetY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMoveTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setClass of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setClass00
static int tolua_LuaInterface_CCharacter_setClass00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  CharacterClass::CharacterClass characterClass = ((CharacterClass::CharacterClass) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClass'", NULL);
#endif
  {
   self->setClass(characterClass);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClass'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCoins of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setCoins00
static int tolua_LuaInterface_CCharacter_setCoins00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int amountOfCoins = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCoins'", NULL);
#endif
  {
   self->setCoins(amountOfCoins);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCoins'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setWanderRadius of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setWanderRadius00
static int tolua_LuaInterface_CCharacter_setWanderRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newWanderRadius = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWanderRadius'", NULL);
#endif
  {
   self->setWanderRadius(newWanderRadius);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWanderRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWanderRadius of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_getWanderRadius00
static int tolua_LuaInterface_CCharacter_getWanderRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCharacter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCharacter* self = (const CCharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWanderRadius'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getWanderRadius();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWanderRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setName of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setName00
static int tolua_LuaInterface_CCharacter_setName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  std::string newName = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setName'", NULL);
#endif
  {
   self->setName(newName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_getName00
static int tolua_LuaInterface_CCharacter_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCharacter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCharacter* self = (const CCharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLevel of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setLevel00
static int tolua_LuaInterface_CCharacter_setLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newLevel = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLevel'", NULL);
#endif
  {
   self->setLevel(newLevel);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLevel of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_getLevel00
static int tolua_LuaInterface_CCharacter_getLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCharacter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCharacter* self = (const CCharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLevel'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getLevel();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setExperience of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setExperience00
static int tolua_LuaInterface_CCharacter_setExperience00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int experience = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setExperience'", NULL);
#endif
  {
   self->setExperience(experience);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setExperience'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMinDamage of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setMinDamage00
static int tolua_LuaInterface_CCharacter_setMinDamage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newMinDamage = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMinDamage'", NULL);
#endif
  {
   self->setMinDamage(newMinDamage);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMinDamage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMinDamage of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_getMinDamage00
static int tolua_LuaInterface_CCharacter_getMinDamage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMinDamage'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMinDamage();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMinDamage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxDamage of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setMaxDamage00
static int tolua_LuaInterface_CCharacter_setMaxDamage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newMaxDamage = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxDamage'", NULL);
#endif
  {
   self->setMaxDamage(newMaxDamage);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxDamage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxDamage of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_getMaxDamage00
static int tolua_LuaInterface_CCharacter_getMaxDamage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxDamage'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxDamage();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxDamage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setArmor of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setArmor00
static int tolua_LuaInterface_CCharacter_setArmor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newArmor = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setArmor'", NULL);
#endif
  {
   self->setArmor(newArmor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setArmor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDamageModifierPoints of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setDamageModifierPoints00
static int tolua_LuaInterface_CCharacter_setDamageModifierPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newDamageModifierPoints = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDamageModifierPoints'", NULL);
#endif
  {
   self->setDamageModifierPoints(newDamageModifierPoints);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDamageModifierPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHitModifierPoints of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setHitModifierPoints00
static int tolua_LuaInterface_CCharacter_setHitModifierPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newHitModifierPoints = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHitModifierPoints'", NULL);
#endif
  {
   self->setHitModifierPoints(newHitModifierPoints);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHitModifierPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEvadeModifierPoints of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setEvadeModifierPoints00
static int tolua_LuaInterface_CCharacter_setEvadeModifierPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newEvadeModifierPoints = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEvadeModifierPoints'", NULL);
#endif
  {
   self->setEvadeModifierPoints(newEvadeModifierPoints);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEvadeModifierPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setParryModifierPoints of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setParryModifierPoints00
static int tolua_LuaInterface_CCharacter_setParryModifierPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newParryModifierPoitns = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setParryModifierPoints'", NULL);
#endif
  {
   self->setParryModifierPoints(newParryModifierPoitns);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setParryModifierPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBlockModifierPoints of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setBlockModifierPoints00
static int tolua_LuaInterface_CCharacter_setBlockModifierPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newBlockModifierPoints = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBlockModifierPoints'", NULL);
#endif
  {
   self->setBlockModifierPoints(newBlockModifierPoints);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBlockModifierPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMeleeCriticalModifierPoints of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setMeleeCriticalModifierPoints00
static int tolua_LuaInterface_CCharacter_setMeleeCriticalModifierPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newMeleeCriticalModifierPoints = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMeleeCriticalModifierPoints'", NULL);
#endif
  {
   self->setMeleeCriticalModifierPoints(newMeleeCriticalModifierPoints);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMeleeCriticalModifierPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setResistElementModifierPoints of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setResistElementModifierPoints00
static int tolua_LuaInterface_CCharacter_setResistElementModifierPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  ElementType::ElementType elementType = ((ElementType::ElementType) (int)  tolua_tonumber(tolua_S,2,0));
  int newResistElementModifierPoints = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setResistElementModifierPoints'", NULL);
#endif
  {
   self->setResistElementModifierPoints(elementType,newResistElementModifierPoints);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setResistElementModifierPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setResistAllModifierPoints of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setResistAllModifierPoints00
static int tolua_LuaInterface_CCharacter_setResistAllModifierPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newResistAllModifierPoints = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setResistAllModifierPoints'", NULL);
#endif
  {
   self->setResistAllModifierPoints(newResistAllModifierPoints);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setResistAllModifierPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpellEffectElementModifierPoints of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setSpellEffectElementModifierPoints00
static int tolua_LuaInterface_CCharacter_setSpellEffectElementModifierPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  ElementType::ElementType elementType = ((ElementType::ElementType) (int)  tolua_tonumber(tolua_S,2,0));
  int newSpellEffectElementModifierPoints = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpellEffectElementModifierPoints'", NULL);
#endif
  {
   self->setSpellEffectElementModifierPoints(elementType,newSpellEffectElementModifierPoints);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpellEffectElementModifierPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpellEffectAllModifierPoints of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setSpellEffectAllModifierPoints00
static int tolua_LuaInterface_CCharacter_setSpellEffectAllModifierPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newSpellEffectAllModifierPoints = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpellEffectAllModifierPoints'", NULL);
#endif
  {
   self->setSpellEffectAllModifierPoints(newSpellEffectAllModifierPoints);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpellEffectAllModifierPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpellCriticalModifierPoints of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setSpellCriticalModifierPoints00
static int tolua_LuaInterface_CCharacter_setSpellCriticalModifierPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newSpellCriticalModifierPoints = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpellCriticalModifierPoints'", NULL);
#endif
  {
   self->setSpellCriticalModifierPoints(newSpellCriticalModifierPoints);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpellCriticalModifierPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHealthRegen of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setHealthRegen00
static int tolua_LuaInterface_CCharacter_setHealthRegen00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newHealthRegen = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHealthRegen'", NULL);
#endif
  {
   self->setHealthRegen(newHealthRegen);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHealthRegen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setManaRegen of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setManaRegen00
static int tolua_LuaInterface_CCharacter_setManaRegen00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newManaRegen = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setManaRegen'", NULL);
#endif
  {
   self->setManaRegen(newManaRegen);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setManaRegen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFatigueRegen of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setFatigueRegen00
static int tolua_LuaInterface_CCharacter_setFatigueRegen00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int newFatigueRegen = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFatigueRegen'", NULL);
#endif
  {
   self->setFatigueRegen(newFatigueRegen);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFatigueRegen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBoundingBox of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setBoundingBox00
static int tolua_LuaInterface_CCharacter_setBoundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int bbx = ((int)  tolua_tonumber(tolua_S,2,0));
  int bby = ((int)  tolua_tonumber(tolua_S,3,0));
  int bbw = ((int)  tolua_tonumber(tolua_S,4,0));
  int bbh = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBoundingBox'", NULL);
#endif
  {
   self->setBoundingBox(bbx,bby,bbw,bbh);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBoundingBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUseBoundingBox of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setUseBoundingBox00
static int tolua_LuaInterface_CCharacter_setUseBoundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  bool use = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUseBoundingBox'", NULL);
#endif
  {
   self->setUseBoundingBox(use);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUseBoundingBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addItemToLootTable of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_addItemToLootTable00
static int tolua_LuaInterface_CCharacter_addItemToLootTable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Item",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  Item* item = ((Item*)  tolua_tousertype(tolua_S,2,0));
  double dropChance = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addItemToLootTable'", NULL);
#endif
  {
   self->addItemToLootTable(item,dropChance);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addItemToLootTable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCoinDrop of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setCoinDrop00
static int tolua_LuaInterface_CCharacter_setCoinDrop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int minCoinDrop = ((int)  tolua_tonumber(tolua_S,2,0));
  int maxCoinDrop = ((int)  tolua_tonumber(tolua_S,3,0));
  double dropChance = ((double)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCoinDrop'", NULL);
#endif
  {
   self->setCoinDrop(minCoinDrop,maxCoinDrop,dropChance);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCoinDrop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_setPosition00
static int tolua_LuaInterface_CCharacter_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  int xpos = ((int)  tolua_tonumber(tolua_S,2,0));
  int ypos = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(xpos,ypos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: inscribeSpellInSpellbook of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_inscribeSpellInSpellbook00
static int tolua_LuaInterface_CCharacter_inscribeSpellInSpellbook00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CSpellActionBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
  CSpellActionBase* spell = ((CSpellActionBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'inscribeSpellInSpellbook'", NULL);
#endif
  {
   self->inscribeSpellInSpellbook(spell);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'inscribeSpellInSpellbook'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getClass of class  CCharacter */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CCharacter_getClass00
static int tolua_LuaInterface_CCharacter_getClass00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* self = (CCharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getClass'", NULL);
#endif
  {
   CharacterClass::CharacterClass tolua_ret = (CharacterClass::CharacterClass)  self->getClass();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getClass'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDescription of class  Item */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Item_setDescription00
static int tolua_LuaInterface_Item_setDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Item",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Item* self = (Item*)  tolua_tousertype(tolua_S,1,0);
  std::string description = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDescription'", NULL);
#endif
  {
   self->setDescription(description);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStats of class  Item */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Item_setStats00
static int tolua_LuaInterface_Item_setStats00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Item",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Item* self = (Item*)  tolua_tousertype(tolua_S,1,0);
  StatsType::StatsType statsType = ((StatsType::StatsType) (int)  tolua_tonumber(tolua_S,2,0));
  int amount = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStats'", NULL);
#endif
  {
   self->setStats(statsType,amount);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStats'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setResistElementModifierPoints of class  Item */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Item_setResistElementModifierPoints00
static int tolua_LuaInterface_Item_setResistElementModifierPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Item",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Item* self = (Item*)  tolua_tousertype(tolua_S,1,0);
  ElementType::ElementType elementType = ((ElementType::ElementType) (int)  tolua_tonumber(tolua_S,2,0));
  int resistModifierPoints = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setResistElementModifierPoints'", NULL);
#endif
  {
   self->setResistElementModifierPoints(elementType,resistModifierPoints);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setResistElementModifierPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpellEffectElementModifierPoints of class  Item */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Item_setSpellEffectElementModifierPoints00
static int tolua_LuaInterface_Item_setSpellEffectElementModifierPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Item",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Item* self = (Item*)  tolua_tousertype(tolua_S,1,0);
  ElementType::ElementType elementType = ((ElementType::ElementType) (int)  tolua_tonumber(tolua_S,2,0));
  int spellEffectElementModifierPoints = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpellEffectElementModifierPoints'", NULL);
#endif
  {
   self->setSpellEffectElementModifierPoints(elementType,spellEffectElementModifierPoints);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpellEffectElementModifierPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMinDamage of class  Item */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Item_setMinDamage00
static int tolua_LuaInterface_Item_setMinDamage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Item",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Item* self = (Item*)  tolua_tousertype(tolua_S,1,0);
  int minDamage = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMinDamage'", NULL);
#endif
  {
   self->setMinDamage(minDamage);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMinDamage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxDamage of class  Item */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Item_setMaxDamage00
static int tolua_LuaInterface_Item_setMaxDamage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Item",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Item* self = (Item*)  tolua_tousertype(tolua_S,1,0);
  int maxDamage = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxDamage'", NULL);
#endif
  {
   self->setMaxDamage(maxDamage);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxDamage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRequiredLevel of class  Item */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Item_setRequiredLevel00
static int tolua_LuaInterface_Item_setRequiredLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Item",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Item* self = (Item*)  tolua_tousertype(tolua_S,1,0);
  int requiredLevel = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRequiredLevel'", NULL);
#endif
  {
   self->setRequiredLevel(requiredLevel);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRequiredLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxStackSize of class  Item */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Item_setMaxStackSize00
static int tolua_LuaInterface_Item_setMaxStackSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Item",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Item* self = (Item*)  tolua_tousertype(tolua_S,1,0);
  int maxStackSize = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxStackSize'", NULL);
#endif
  {
   self->setMaxStackSize(maxStackSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxStackSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setValue of class  Item */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Item_setValue00
static int tolua_LuaInterface_Item_setValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Item",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Item* self = (Item*)  tolua_tousertype(tolua_S,1,0);
  int newValue = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setValue'", NULL);
#endif
  {
   self->setValue(newValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpell of class  Item */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Item_setSpell00
static int tolua_LuaInterface_Item_setSpell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Item",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CSpell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Item* self = (Item*)  tolua_tousertype(tolua_S,1,0);
  CSpell* newSpell = ((CSpell*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpell'", NULL);
#endif
  {
   self->setSpell(newSpell);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTriggerSpellOnSelf of class  Item */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Item_addTriggerSpellOnSelf00
static int tolua_LuaInterface_Item_addTriggerSpellOnSelf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Item",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CSpellActionBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Item* self = (Item*)  tolua_tousertype(tolua_S,1,0);
  CSpellActionBase* spellToTrigger = ((CSpellActionBase*)  tolua_tousertype(tolua_S,2,0));
  float chanceToTrigger = ((float)  tolua_tonumber(tolua_S,3,0));
  TriggerType::TriggerType triggerType = ((TriggerType::TriggerType) (int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addTriggerSpellOnSelf'", NULL);
#endif
  {
   self->addTriggerSpellOnSelf(spellToTrigger,chanceToTrigger,triggerType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addTriggerSpellOnSelf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTriggerSpellOnTarget of class  Item */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Item_addTriggerSpellOnTarget00
static int tolua_LuaInterface_Item_addTriggerSpellOnTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Item",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CSpellActionBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Item* self = (Item*)  tolua_tousertype(tolua_S,1,0);
  CSpellActionBase* spellToTrigger = ((CSpellActionBase*)  tolua_tousertype(tolua_S,2,0));
  float chanceToTrigger = ((float)  tolua_tonumber(tolua_S,3,0));
  TriggerType::TriggerType triggerType = ((TriggerType::TriggerType) (int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addTriggerSpellOnTarget'", NULL);
#endif
  {
   self->addTriggerSpellOnTarget(spellToTrigger,chanceToTrigger,triggerType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addTriggerSpellOnTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  InteractionPoint */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_InteractionPoint_setPosition00
static int tolua_LuaInterface_InteractionPoint_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"InteractionPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  InteractionPoint* self = (InteractionPoint*)  tolua_tousertype(tolua_S,1,0);
  int posX = ((int)  tolua_tonumber(tolua_S,2,0));
  int posY = ((int)  tolua_tonumber(tolua_S,3,0));
  int width = ((int)  tolua_tonumber(tolua_S,4,0));
  int height = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(posX,posY,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInteractionType of class  InteractionPoint */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_InteractionPoint_setInteractionType00
static int tolua_LuaInterface_InteractionPoint_setInteractionType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"InteractionPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  InteractionPoint* self = (InteractionPoint*)  tolua_tousertype(tolua_S,1,0);
  InteractionType::InteractionType interactionType = ((InteractionType::InteractionType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInteractionType'", NULL);
#endif
  {
   self->setInteractionType(interactionType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInteractionType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundTexture of class  InteractionPoint */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_InteractionPoint_setBackgroundTexture00
static int tolua_LuaInterface_InteractionPoint_setBackgroundTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"InteractionPoint",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  InteractionPoint* self = (InteractionPoint*)  tolua_tousertype(tolua_S,1,0);
  std::string texturename = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundTexture'", NULL);
#endif
  {
   self->setBackgroundTexture(texturename);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInteractionCode of class  InteractionPoint */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_InteractionPoint_setInteractionCode00
static int tolua_LuaInterface_InteractionPoint_setInteractionCode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"InteractionPoint",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  InteractionPoint* self = (InteractionPoint*)  tolua_tousertype(tolua_S,1,0);
  std::string interactionCode = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInteractionCode'", NULL);
#endif
  {
   self->setInteractionCode(interactionCode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInteractionCode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  InteractionRegion */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_InteractionRegion_setPosition00
static int tolua_LuaInterface_InteractionRegion_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"InteractionRegion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  InteractionRegion* self = (InteractionRegion*)  tolua_tousertype(tolua_S,1,0);
  int left = ((int)  tolua_tonumber(tolua_S,2,0));
  int bottom = ((int)  tolua_tonumber(tolua_S,3,0));
  int width = ((int)  tolua_tonumber(tolua_S,4,0));
  int height = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(left,bottom,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnEnterText of class  InteractionRegion */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_InteractionRegion_setOnEnterText00
static int tolua_LuaInterface_InteractionRegion_setOnEnterText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"InteractionRegion",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  InteractionRegion* self = (InteractionRegion*)  tolua_tousertype(tolua_S,1,0);
  std::string enterCode = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnEnterText'", NULL);
#endif
  {
   self->setOnEnterText(enterCode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnEnterText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnLeaveText of class  InteractionRegion */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_InteractionRegion_setOnLeaveText00
static int tolua_LuaInterface_InteractionRegion_setOnLeaveText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"InteractionRegion",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  InteractionRegion* self = (InteractionRegion*)  tolua_tousertype(tolua_S,1,0);
  std::string leaveCode = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnLeaveText'", NULL);
#endif
  {
   self->setOnLeaveText(leaveCode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnLeaveText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setExecuteText of class  LuaCallIndirection */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_LuaCallIndirection_setExecuteText00
static int tolua_LuaInterface_LuaCallIndirection_setExecuteText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LuaCallIndirection",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LuaCallIndirection* self = (LuaCallIndirection*)  tolua_tousertype(tolua_S,1,0);
  std::string text = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setExecuteText'", NULL);
#endif
  {
   self->setExecuteText(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setExecuteText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addOnDieEventHandler of class  CNPC */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CNPC_addOnDieEventHandler00
static int tolua_LuaInterface_CNPC_addOnDieEventHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CNPC",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CallIndirection",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CNPC* self = (CNPC*)  tolua_tousertype(tolua_S,1,0);
  CallIndirection* eventHandler = ((CallIndirection*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addOnDieEventHandler'", NULL);
#endif
  {
   self->addOnDieEventHandler(eventHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addOnDieEventHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAttitude of class  CNPC */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CNPC_setAttitude00
static int tolua_LuaInterface_CNPC_setAttitude00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CNPC",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CNPC* self = (CNPC*)  tolua_tousertype(tolua_S,1,0);
  Attitude::Attitude attitude = ((Attitude::Attitude) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAttitude'", NULL);
#endif
  {
   self->setAttitude(attitude);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAttitude'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSaveText of class  Player */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Player_getSaveText00
static int tolua_LuaInterface_Player_getSaveText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Player",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Player* self = (Player*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSaveText'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getSaveText();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSaveText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  TextWindow */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_TextWindow_setText00
static int tolua_LuaInterface_TextWindow_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextWindow",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextWindow* self = (TextWindow*)  tolua_tousertype(tolua_S,1,0);
  std::string text = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutocloseTime of class  TextWindow */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_TextWindow_setAutocloseTime00
static int tolua_LuaInterface_TextWindow_setAutocloseTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextWindow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextWindow* self = (TextWindow*)  tolua_tousertype(tolua_S,1,0);
  int autocloseTime = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutocloseTime'", NULL);
#endif
  {
   self->setAutocloseTime(autocloseTime);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutocloseTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  TextWindow */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_TextWindow_setPosition00
static int tolua_LuaInterface_TextWindow_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextWindow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextWindow* self = (TextWindow*)  tolua_tousertype(tolua_S,1,0);
  PositionType::PositionType tolua_var_1 = ((PositionType::PositionType) (int)  tolua_tonumber(tolua_S,2,0));
  int x = ((int)  tolua_tonumber(tolua_S,3,0));
  int y = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(tolua_var_1,x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: center of class  TextWindow */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_TextWindow_center00
static int tolua_LuaInterface_TextWindow_center00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextWindow* self = (TextWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'center'", NULL);
#endif
  {
   self->center();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'center'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnCloseText of class  TextWindow */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_TextWindow_setOnCloseText00
static int tolua_LuaInterface_TextWindow_setOnCloseText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextWindow",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextWindow* self = (TextWindow*)  tolua_tousertype(tolua_S,1,0);
  std::string onCloseText = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnCloseText'", NULL);
#endif
  {
   self->setOnCloseText(onCloseText);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnCloseText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toggle of class  Shop */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Shop_toggle00
static int tolua_LuaInterface_Shop_toggle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Shop",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Shop* self = (Shop*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'toggle'", NULL);
#endif
  {
   self->toggle();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toggle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addItem of class  Shop */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Shop_addItem00
static int tolua_LuaInterface_Shop_addItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Shop",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Item",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Shop* self = (Shop*)  tolua_tousertype(tolua_S,1,0);
  Item* item = ((Item*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addItem'", NULL);
#endif
  {
   self->addItem(item);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addAdditionalSpellOnTarget of class  CSpellActionBase */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CSpellActionBase_addAdditionalSpellOnTarget00
static int tolua_LuaInterface_CSpellActionBase_addAdditionalSpellOnTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSpellActionBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CSpellActionBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSpellActionBase* self = (CSpellActionBase*)  tolua_tousertype(tolua_S,1,0);
  CSpellActionBase* spell = ((CSpellActionBase*)  tolua_tousertype(tolua_S,2,0));
  double chanceToExecute = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addAdditionalSpellOnTarget'", NULL);
#endif
  {
   self->addAdditionalSpellOnTarget(spell,chanceToExecute);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addAdditionalSpellOnTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addAdditionalSpellOnCreator of class  CSpellActionBase */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CSpellActionBase_addAdditionalSpellOnCreator00
static int tolua_LuaInterface_CSpellActionBase_addAdditionalSpellOnCreator00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSpellActionBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CSpellActionBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSpellActionBase* self = (CSpellActionBase*)  tolua_tousertype(tolua_S,1,0);
  CSpellActionBase* spell = ((CSpellActionBase*)  tolua_tousertype(tolua_S,2,0));
  double chanceToExecute = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addAdditionalSpellOnCreator'", NULL);
#endif
  {
   self->addAdditionalSpellOnCreator(spell,chanceToExecute);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addAdditionalSpellOnCreator'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRequiredClass of class  CSpellActionBase */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CSpellActionBase_setRequiredClass00
static int tolua_LuaInterface_CSpellActionBase_setRequiredClass00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSpellActionBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSpellActionBase* self = (CSpellActionBase*)  tolua_tousertype(tolua_S,1,0);
  CharacterClass::CharacterClass requiredClass = ((CharacterClass::CharacterClass) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRequiredClass'", NULL);
#endif
  {
   self->setRequiredClass(requiredClass);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRequiredClass'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRequiredLevel of class  CSpellActionBase */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CSpellActionBase_setRequiredLevel00
static int tolua_LuaInterface_CSpellActionBase_setRequiredLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSpellActionBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSpellActionBase* self = (CSpellActionBase*)  tolua_tousertype(tolua_S,1,0);
  int requiredLevel = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRequiredLevel'", NULL);
#endif
  {
   self->setRequiredLevel(requiredLevel);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRequiredLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addRequiredWeapon of class  CSpellActionBase */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CSpellActionBase_addRequiredWeapon00
static int tolua_LuaInterface_CSpellActionBase_addRequiredWeapon00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSpellActionBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSpellActionBase* self = (CSpellActionBase*)  tolua_tousertype(tolua_S,1,0);
  WeaponType::WeaponType weaponType = ((WeaponType::WeaponType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addRequiredWeapon'", NULL);
#endif
  {
   self->addRequiredWeapon(weaponType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addRequiredWeapon'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSoundSpellCasting of class  CSpellActionBase */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CSpellActionBase_setSoundSpellCasting00
static int tolua_LuaInterface_CSpellActionBase_setSoundSpellCasting00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSpellActionBase",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSpellActionBase* self = (CSpellActionBase*)  tolua_tousertype(tolua_S,1,0);
  std::string soundSpellCasting = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSoundSpellCasting'", NULL);
#endif
  {
   self->setSoundSpellCasting(soundSpellCasting);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSoundSpellCasting'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSoundSpellStart of class  CSpellActionBase */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CSpellActionBase_setSoundSpellStart00
static int tolua_LuaInterface_CSpellActionBase_setSoundSpellStart00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSpellActionBase",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSpellActionBase* self = (CSpellActionBase*)  tolua_tousertype(tolua_S,1,0);
  std::string soundSpellStart = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSoundSpellStart'", NULL);
#endif
  {
   self->setSoundSpellStart(soundSpellStart);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSoundSpellStart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSoundSpellHit of class  CSpellActionBase */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CSpellActionBase_setSoundSpellHit00
static int tolua_LuaInterface_CSpellActionBase_setSoundSpellHit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSpellActionBase",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSpellActionBase* self = (CSpellActionBase*)  tolua_tousertype(tolua_S,1,0);
  std::string soundSpellHit = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSoundSpellHit'", NULL);
#endif
  {
   self->setSoundSpellHit(soundSpellHit);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSoundSpellHit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRank of class  CSpellActionBase */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CSpellActionBase_setRank00
static int tolua_LuaInterface_CSpellActionBase_setRank00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSpellActionBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSpellActionBase* self = (CSpellActionBase*)  tolua_tousertype(tolua_S,1,0);
  int rank = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRank'", NULL);
#endif
  {
   self->setRank(rank);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRank'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInstant of class  CSpellActionBase */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CSpellActionBase_setInstant00
static int tolua_LuaInterface_CSpellActionBase_setInstant00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSpellActionBase",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSpellActionBase* self = (CSpellActionBase*)  tolua_tousertype(tolua_S,1,0);
  bool instant = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInstant'", NULL);
#endif
  {
   self->setInstant(instant);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInstant'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCharacterState of class  CSpellActionBase */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_CSpellActionBase_setCharacterState00
static int tolua_LuaInterface_CSpellActionBase_setCharacterState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSpellActionBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSpellActionBase* self = (CSpellActionBase*)  tolua_tousertype(tolua_S,1,0);
  CharacterStates::CharacterStates characterState = ((CharacterStates::CharacterStates) (int)  tolua_tonumber(tolua_S,2,0));
  float value = ((float)  tolua_tonumber(tolua_S,3,1.0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCharacterState'", NULL);
#endif
  {
   self->setCharacterState(characterState,value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCharacterState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCastTime of class  ConfigurableSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_ConfigurableSpell_setCastTime00
static int tolua_LuaInterface_ConfigurableSpell_setCastTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ConfigurableSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ConfigurableSpell* self = (ConfigurableSpell*)  tolua_tousertype(tolua_S,1,0);
  int newCastTime = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCastTime'", NULL);
#endif
  {
   self->setCastTime(newCastTime);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCastTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCooldown of class  ConfigurableSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_ConfigurableSpell_setCooldown00
static int tolua_LuaInterface_ConfigurableSpell_setCooldown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ConfigurableSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ConfigurableSpell* self = (ConfigurableSpell*)  tolua_tousertype(tolua_S,1,0);
  int newCooldown = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCooldown'", NULL);
#endif
  {
   self->setCooldown(newCooldown);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCooldown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpellCost of class  ConfigurableSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_ConfigurableSpell_setSpellCost00
static int tolua_LuaInterface_ConfigurableSpell_setSpellCost00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ConfigurableSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ConfigurableSpell* self = (ConfigurableSpell*)  tolua_tousertype(tolua_S,1,0);
  int spellCost = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpellCost'", NULL);
#endif
  {
   self->setSpellCost(spellCost);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpellCost'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setName of class  ConfigurableSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_ConfigurableSpell_setName00
static int tolua_LuaInterface_ConfigurableSpell_setName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ConfigurableSpell",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ConfigurableSpell* self = (ConfigurableSpell*)  tolua_tousertype(tolua_S,1,0);
  std::string newName = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setName'", NULL);
#endif
  {
   self->setName(newName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInfo of class  ConfigurableSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_ConfigurableSpell_setInfo00
static int tolua_LuaInterface_ConfigurableSpell_setInfo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ConfigurableSpell",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ConfigurableSpell* self = (ConfigurableSpell*)  tolua_tousertype(tolua_S,1,0);
  std::string newInfo = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInfo'", NULL);
#endif
  {
   self->setInfo(newInfo);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInfo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRange of class  ConfigurableSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_ConfigurableSpell_setRange00
static int tolua_LuaInterface_ConfigurableSpell_setRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ConfigurableSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ConfigurableSpell* self = (ConfigurableSpell*)  tolua_tousertype(tolua_S,1,0);
  int minRange = ((int)  tolua_tonumber(tolua_S,2,0));
  int maxRange = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRange'", NULL);
#endif
  {
   self->setRange(minRange,maxRange);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpellSymbol of class  ConfigurableSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_ConfigurableSpell_setSpellSymbol00
static int tolua_LuaInterface_ConfigurableSpell_setSpellSymbol00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ConfigurableSpell",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ConfigurableSpell* self = (ConfigurableSpell*)  tolua_tousertype(tolua_S,1,0);
  std::string symbolFile = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpellSymbol'", NULL);
#endif
  {
   self->setSpellSymbol(symbolFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpellSymbol'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCastTime of class  ConfigurableAction */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_ConfigurableAction_setCastTime00
static int tolua_LuaInterface_ConfigurableAction_setCastTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ConfigurableAction",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ConfigurableAction* self = (ConfigurableAction*)  tolua_tousertype(tolua_S,1,0);
  int newCastTime = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCastTime'", NULL);
#endif
  {
   self->setCastTime(newCastTime);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCastTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCooldown of class  ConfigurableAction */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_ConfigurableAction_setCooldown00
static int tolua_LuaInterface_ConfigurableAction_setCooldown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ConfigurableAction",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ConfigurableAction* self = (ConfigurableAction*)  tolua_tousertype(tolua_S,1,0);
  int newCooldown = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCooldown'", NULL);
#endif
  {
   self->setCooldown(newCooldown);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCooldown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpellCost of class  ConfigurableAction */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_ConfigurableAction_setSpellCost00
static int tolua_LuaInterface_ConfigurableAction_setSpellCost00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ConfigurableAction",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ConfigurableAction* self = (ConfigurableAction*)  tolua_tousertype(tolua_S,1,0);
  int spellCost = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpellCost'", NULL);
#endif
  {
   self->setSpellCost(spellCost);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpellCost'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setName of class  ConfigurableAction */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_ConfigurableAction_setName00
static int tolua_LuaInterface_ConfigurableAction_setName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ConfigurableAction",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ConfigurableAction* self = (ConfigurableAction*)  tolua_tousertype(tolua_S,1,0);
  std::string newName = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setName'", NULL);
#endif
  {
   self->setName(newName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInfo of class  ConfigurableAction */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_ConfigurableAction_setInfo00
static int tolua_LuaInterface_ConfigurableAction_setInfo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ConfigurableAction",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ConfigurableAction* self = (ConfigurableAction*)  tolua_tousertype(tolua_S,1,0);
  std::string newInfo = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInfo'", NULL);
#endif
  {
   self->setInfo(newInfo);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInfo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRange of class  ConfigurableAction */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_ConfigurableAction_setRange00
static int tolua_LuaInterface_ConfigurableAction_setRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ConfigurableAction",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ConfigurableAction* self = (ConfigurableAction*)  tolua_tousertype(tolua_S,1,0);
  int minRange = ((int)  tolua_tonumber(tolua_S,2,0));
  int maxRange = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRange'", NULL);
#endif
  {
   self->setRange(minRange,maxRange);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpellSymbol of class  ConfigurableAction */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_ConfigurableAction_setSpellSymbol00
static int tolua_LuaInterface_ConfigurableAction_setSpellSymbol00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ConfigurableAction",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ConfigurableAction* self = (ConfigurableAction*)  tolua_tousertype(tolua_S,1,0);
  std::string symbolFile = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpellSymbol'", NULL);
#endif
  {
   self->setSpellSymbol(symbolFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpellSymbol'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirectDamage of class  GeneralDamageSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralDamageSpell_setDirectDamage00
static int tolua_LuaInterface_GeneralDamageSpell_setDirectDamage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralDamageSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralDamageSpell* self = (GeneralDamageSpell*)  tolua_tousertype(tolua_S,1,0);
  int newMinDirectDamage = ((int)  tolua_tonumber(tolua_S,2,0));
  int newMaxDirectDamage = ((int)  tolua_tonumber(tolua_S,3,0));
  ElementType::ElementType newElementDirect = ((ElementType::ElementType) (int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirectDamage'", NULL);
#endif
  {
   self->setDirectDamage(newMinDirectDamage,newMaxDirectDamage,newElementDirect);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirectDamage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContinuousDamage of class  GeneralDamageSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralDamageSpell_setContinuousDamage00
static int tolua_LuaInterface_GeneralDamageSpell_setContinuousDamage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralDamageSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralDamageSpell* self = (GeneralDamageSpell*)  tolua_tousertype(tolua_S,1,0);
  double newMinContDamagePerSec = ((double)  tolua_tonumber(tolua_S,2,0));
  double newMaxContDamagePerSec = ((double)  tolua_tonumber(tolua_S,3,0));
  int newContDamageTime = ((int)  tolua_tonumber(tolua_S,4,0));
  ElementType::ElementType newContDamageElement = ((ElementType::ElementType) (int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContinuousDamage'", NULL);
#endif
  {
   self->setContinuousDamage(newMinContDamagePerSec,newMaxContDamagePerSec,newContDamageTime,newContDamageElement);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContinuousDamage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNumAnimations of class  GeneralRayDamageSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralRayDamageSpell_setNumAnimations00
static int tolua_LuaInterface_GeneralRayDamageSpell_setNumAnimations00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralRayDamageSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralRayDamageSpell* self = (GeneralRayDamageSpell*)  tolua_tousertype(tolua_S,1,0);
  int count = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNumAnimations'", NULL);
#endif
  {
   self->setNumAnimations(count);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNumAnimations'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnimationTexture of class  GeneralRayDamageSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralRayDamageSpell_setAnimationTexture00
static int tolua_LuaInterface_GeneralRayDamageSpell_setAnimationTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralRayDamageSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralRayDamageSpell* self = (GeneralRayDamageSpell*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
  std::string filename = ((std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnimationTexture'", NULL);
#endif
  {
   self->setAnimationTexture(num,filename);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnimationTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNumAnimations of class  GeneralAreaDamageSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralAreaDamageSpell_setNumAnimations00
static int tolua_LuaInterface_GeneralAreaDamageSpell_setNumAnimations00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralAreaDamageSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralAreaDamageSpell* self = (GeneralAreaDamageSpell*)  tolua_tousertype(tolua_S,1,0);
  int count = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNumAnimations'", NULL);
#endif
  {
   self->setNumAnimations(count);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNumAnimations'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnimationTexture of class  GeneralAreaDamageSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralAreaDamageSpell_setAnimationTexture00
static int tolua_LuaInterface_GeneralAreaDamageSpell_setAnimationTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralAreaDamageSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralAreaDamageSpell* self = (GeneralAreaDamageSpell*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
  std::string filename = ((std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnimationTexture'", NULL);
#endif
  {
   self->setAnimationTexture(num,filename);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnimationTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRadius of class  GeneralAreaDamageSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralAreaDamageSpell_setRadius00
static int tolua_LuaInterface_GeneralAreaDamageSpell_setRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralAreaDamageSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralAreaDamageSpell* self = (GeneralAreaDamageSpell*)  tolua_tousertype(tolua_S,1,0);
  int newRadius = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRadius'", NULL);
#endif
  {
   self->setRadius(newRadius);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMoveSpeed of class  GeneralBoltDamageSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralBoltDamageSpell_setMoveSpeed00
static int tolua_LuaInterface_GeneralBoltDamageSpell_setMoveSpeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralBoltDamageSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralBoltDamageSpell* self = (GeneralBoltDamageSpell*)  tolua_tousertype(tolua_S,1,0);
  int newMoveSpeed = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMoveSpeed'", NULL);
#endif
  {
   self->setMoveSpeed(newMoveSpeed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMoveSpeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setExpireTime of class  GeneralBoltDamageSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralBoltDamageSpell_setExpireTime00
static int tolua_LuaInterface_GeneralBoltDamageSpell_setExpireTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralBoltDamageSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralBoltDamageSpell* self = (GeneralBoltDamageSpell*)  tolua_tousertype(tolua_S,1,0);
  int newExpireTime = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setExpireTime'", NULL);
#endif
  {
   self->setExpireTime(newExpireTime);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setExpireTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNumAnimations of class  GeneralBoltDamageSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralBoltDamageSpell_setNumAnimations00
static int tolua_LuaInterface_GeneralBoltDamageSpell_setNumAnimations00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralBoltDamageSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralBoltDamageSpell* self = (GeneralBoltDamageSpell*)  tolua_tousertype(tolua_S,1,0);
  int count = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNumAnimations'", NULL);
#endif
  {
   self->setNumAnimations(count);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNumAnimations'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnimationTexture of class  GeneralBoltDamageSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralBoltDamageSpell_setAnimationTexture00
static int tolua_LuaInterface_GeneralBoltDamageSpell_setAnimationTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralBoltDamageSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralBoltDamageSpell* self = (GeneralBoltDamageSpell*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
  std::string filename = ((std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnimationTexture'", NULL);
#endif
  {
   self->setAnimationTexture(num,filename);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnimationTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEffectType of class  GeneralHealingSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralHealingSpell_setEffectType00
static int tolua_LuaInterface_GeneralHealingSpell_setEffectType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralHealingSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralHealingSpell* self = (GeneralHealingSpell*)  tolua_tousertype(tolua_S,1,0);
  EffectType::EffectType newEffectType = ((EffectType::EffectType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEffectType'", NULL);
#endif
  {
   self->setEffectType(newEffectType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEffectType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirectHealing of class  GeneralHealingSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralHealingSpell_setDirectHealing00
static int tolua_LuaInterface_GeneralHealingSpell_setDirectHealing00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralHealingSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralHealingSpell* self = (GeneralHealingSpell*)  tolua_tousertype(tolua_S,1,0);
  int healEffectMin = ((int)  tolua_tonumber(tolua_S,2,0));
  int healEffectMax = ((int)  tolua_tonumber(tolua_S,3,0));
  ElementType::ElementType healEffectElement = ((ElementType::ElementType) (int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirectHealing'", NULL);
#endif
  {
   self->setDirectHealing(healEffectMin,healEffectMax,healEffectElement);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirectHealing'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContinuousHealing of class  GeneralHealingSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralHealingSpell_setContinuousHealing00
static int tolua_LuaInterface_GeneralHealingSpell_setContinuousHealing00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralHealingSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralHealingSpell* self = (GeneralHealingSpell*)  tolua_tousertype(tolua_S,1,0);
  double minContinuousHealingPerSecond = ((double)  tolua_tonumber(tolua_S,2,0));
  double maxContinuousHealingPerSecond = ((double)  tolua_tonumber(tolua_S,3,0));
  int continuousHealingTime = ((int)  tolua_tonumber(tolua_S,4,0));
  ElementType::ElementType elementContinuous = ((ElementType::ElementType) (int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContinuousHealing'", NULL);
#endif
  {
   self->setContinuousHealing(minContinuousHealingPerSecond,maxContinuousHealingPerSecond,continuousHealingTime,elementContinuous);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContinuousHealing'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEffectType of class  GeneralBuffSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralBuffSpell_setEffectType00
static int tolua_LuaInterface_GeneralBuffSpell_setEffectType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralBuffSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralBuffSpell* self = (GeneralBuffSpell*)  tolua_tousertype(tolua_S,1,0);
  EffectType::EffectType newEffectType = ((EffectType::EffectType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEffectType'", NULL);
#endif
  {
   self->setEffectType(newEffectType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEffectType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDuration of class  GeneralBuffSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralBuffSpell_setDuration00
static int tolua_LuaInterface_GeneralBuffSpell_setDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralBuffSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralBuffSpell* self = (GeneralBuffSpell*)  tolua_tousertype(tolua_S,1,0);
  int newDuration = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDuration'", NULL);
#endif
  {
   self->setDuration(newDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStats of class  GeneralBuffSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralBuffSpell_setStats00
static int tolua_LuaInterface_GeneralBuffSpell_setStats00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralBuffSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralBuffSpell* self = (GeneralBuffSpell*)  tolua_tousertype(tolua_S,1,0);
  StatsType::StatsType statsType = ((StatsType::StatsType) (int)  tolua_tonumber(tolua_S,2,0));
  int amount = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStats'", NULL);
#endif
  {
   self->setStats(statsType,amount);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStats'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setResistElementModifierPoints of class  GeneralBuffSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralBuffSpell_setResistElementModifierPoints00
static int tolua_LuaInterface_GeneralBuffSpell_setResistElementModifierPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralBuffSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralBuffSpell* self = (GeneralBuffSpell*)  tolua_tousertype(tolua_S,1,0);
  ElementType::ElementType elementType = ((ElementType::ElementType) (int)  tolua_tonumber(tolua_S,2,0));
  int resistModifierPoints = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setResistElementModifierPoints'", NULL);
#endif
  {
   self->setResistElementModifierPoints(elementType,resistModifierPoints);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setResistElementModifierPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpellEffectElementModifierPoints of class  GeneralBuffSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_GeneralBuffSpell_setSpellEffectElementModifierPoints00
static int tolua_LuaInterface_GeneralBuffSpell_setSpellEffectElementModifierPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralBuffSpell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralBuffSpell* self = (GeneralBuffSpell*)  tolua_tousertype(tolua_S,1,0);
  ElementType::ElementType elementType = ((ElementType::ElementType) (int)  tolua_tonumber(tolua_S,2,0));
  int spellEffectElementModifierPoints = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpellEffectElementModifierPoints'", NULL);
#endif
  {
   self->setSpellEffectElementModifierPoints(elementType,spellEffectElementModifierPoints);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpellEffectElementModifierPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDamageBonus of class  MeleeDamageAction */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_MeleeDamageAction_setDamageBonus00
static int tolua_LuaInterface_MeleeDamageAction_setDamageBonus00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MeleeDamageAction",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MeleeDamageAction* self = (MeleeDamageAction*)  tolua_tousertype(tolua_S,1,0);
  double damageBonus = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDamageBonus'", NULL);
#endif
  {
   self->setDamageBonus(damageBonus);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDamageBonus'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDamageBonus of class  RangedDamageAction */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_RangedDamageAction_setDamageBonus00
static int tolua_LuaInterface_RangedDamageAction_setDamageBonus00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RangedDamageAction",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RangedDamageAction* self = (RangedDamageAction*)  tolua_tousertype(tolua_S,1,0);
  double damageBonus = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDamageBonus'", NULL);
#endif
  {
   self->setDamageBonus(damageBonus);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDamageBonus'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMoveSpeed of class  RangedDamageAction */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_RangedDamageAction_setMoveSpeed00
static int tolua_LuaInterface_RangedDamageAction_setMoveSpeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RangedDamageAction",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RangedDamageAction* self = (RangedDamageAction*)  tolua_tousertype(tolua_S,1,0);
  int newMoveSpeed = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMoveSpeed'", NULL);
#endif
  {
   self->setMoveSpeed(newMoveSpeed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMoveSpeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setExpireTime of class  RangedDamageAction */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_RangedDamageAction_setExpireTime00
static int tolua_LuaInterface_RangedDamageAction_setExpireTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RangedDamageAction",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RangedDamageAction* self = (RangedDamageAction*)  tolua_tousertype(tolua_S,1,0);
  int newExpireTime = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setExpireTime'", NULL);
#endif
  {
   self->setExpireTime(newExpireTime);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setExpireTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNumAnimations of class  RangedDamageAction */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_RangedDamageAction_setNumAnimations00
static int tolua_LuaInterface_RangedDamageAction_setNumAnimations00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RangedDamageAction",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RangedDamageAction* self = (RangedDamageAction*)  tolua_tousertype(tolua_S,1,0);
  int count = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNumAnimations'", NULL);
#endif
  {
   self->setNumAnimations(count);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNumAnimations'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnimationTexture of class  RangedDamageAction */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_RangedDamageAction_setAnimationTexture00
static int tolua_LuaInterface_RangedDamageAction_setAnimationTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RangedDamageAction",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RangedDamageAction* self = (RangedDamageAction*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
  std::string filename = ((std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnimationTexture'", NULL);
#endif
  {
   self->setAnimationTexture(num,filename);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnimationTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addRequiredItemForCompletion of class  Quest */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Quest_addRequiredItemForCompletion00
static int tolua_LuaInterface_Quest_addRequiredItemForCompletion00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Quest",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Item",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Quest* self = (Quest*)  tolua_tousertype(tolua_S,1,0);
  Item* requiredItem = ((Item*)  tolua_tousertype(tolua_S,2,0));
  int quantity = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addRequiredItemForCompletion'", NULL);
#endif
  {
   self->addRequiredItemForCompletion(requiredItem,quantity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addRequiredItemForCompletion'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDescription of class  Quest */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Quest_setDescription00
static int tolua_LuaInterface_Quest_setDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Quest",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Quest* self = (Quest*)  tolua_tousertype(tolua_S,1,0);
  std::string tolua_var_2 = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDescription'", NULL);
#endif
  {
   self->setDescription(tolua_var_2);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setExperienceReward of class  Quest */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Quest_setExperienceReward00
static int tolua_LuaInterface_Quest_setExperienceReward00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Quest",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Quest* self = (Quest*)  tolua_tousertype(tolua_S,1,0);
  int experienceReward = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setExperienceReward'", NULL);
#endif
  {
   self->setExperienceReward(experienceReward);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setExperienceReward'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCoinReward of class  Quest */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Quest_setCoinReward00
static int tolua_LuaInterface_Quest_setCoinReward00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Quest",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Quest* self = (Quest*)  tolua_tousertype(tolua_S,1,0);
  int coinReward = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCoinReward'", NULL);
#endif
  {
   self->setCoinReward(coinReward);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCoinReward'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setItemReward of class  Quest */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Quest_setItemReward00
static int tolua_LuaInterface_Quest_setItemReward00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Quest",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Item",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Quest* self = (Quest*)  tolua_tousertype(tolua_S,1,0);
  Item* itemReward = ((Item*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setItemReward'", NULL);
#endif
  {
   self->setItemReward(itemReward);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setItemReward'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: finishQuest of class  Quest */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_Quest_finishQuest00
static int tolua_LuaInterface_Quest_finishQuest00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Quest",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Quest* self = (Quest*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'finishQuest'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->finishQuest();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'finishQuest'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::createNewMobType */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_createNewMobType00
static int tolua_LuaInterface_DawnInterface_createNewMobType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::string typeID = ((std::string)  tolua_tocppstring(tolua_S,1,0));
  {
   CCharacter* tolua_ret = (CCharacter*)  DawnInterface::createNewMobType(typeID);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCharacter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createNewMobType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::createNewItem */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_createNewItem00
static int tolua_LuaInterface_DawnInterface_createNewItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,10,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::string name = ((std::string)  tolua_tocppstring(tolua_S,1,0));
  int sizeX = ((int)  tolua_tonumber(tolua_S,2,0));
  int sizeY = ((int)  tolua_tonumber(tolua_S,3,0));
  std::string symbolFile = ((std::string)  tolua_tocppstring(tolua_S,4,0));
  ItemQuality::ItemQuality itemQuality = ((ItemQuality::ItemQuality) (int)  tolua_tonumber(tolua_S,5,0));
  EquipPosition::EquipPosition equipPosition = ((EquipPosition::EquipPosition) (int)  tolua_tonumber(tolua_S,6,0));
  ItemType::ItemType itemType = ((ItemType::ItemType) (int)  tolua_tonumber(tolua_S,7,0));
  ArmorType::ArmorType armorType = ((ArmorType::ArmorType) (int)  tolua_tonumber(tolua_S,8,0));
  WeaponType::WeaponType weaponType = ((WeaponType::WeaponType) (int)  tolua_tonumber(tolua_S,9,0));
  {
   Item* tolua_ret = (Item*)  DawnInterface::createNewItem(name,sizeX,sizeY,symbolFile,itemQuality,equipPosition,itemType,armorType,weaponType);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Item");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createNewItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::giveItemToPlayer */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_giveItemToPlayer00
static int tolua_LuaInterface_DawnInterface_giveItemToPlayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Item",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Item* item = ((Item*)  tolua_tousertype(tolua_S,1,0));
  {
   DawnInterface::giveItemToPlayer(item);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'giveItemToPlayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::giveExpToPlayer */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_giveExpToPlayer00
static int tolua_LuaInterface_DawnInterface_giveExpToPlayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int experience = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   DawnInterface::giveExpToPlayer(experience);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'giveExpToPlayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::addMobSpawnPoint */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_addMobSpawnPoint00
static int tolua_LuaInterface_DawnInterface_addMobSpawnPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::string mobID = ((std::string)  tolua_tocppstring(tolua_S,1,0));
  int x_pos = ((int)  tolua_tonumber(tolua_S,2,0));
  int y_pos = ((int)  tolua_tonumber(tolua_S,3,0));
  int respawn_rate = ((int)  tolua_tonumber(tolua_S,4,0));
  int do_respawn = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   CNPC* tolua_ret = (CNPC*)  DawnInterface::addMobSpawnPoint(mobID,x_pos,y_pos,respawn_rate,do_respawn);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CNPC");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addMobSpawnPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::removeMobSpawnPoint */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_removeMobSpawnPoint00
static int tolua_LuaInterface_DawnInterface_removeMobSpawnPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CNPC",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CNPC* mobSpawnPoint = ((CNPC*)  tolua_tousertype(tolua_S,1,0));
  {
   DawnInterface::removeMobSpawnPoint(mobSpawnPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeMobSpawnPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::createGeneralRayDamageSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_createGeneralRayDamageSpell00
static int tolua_LuaInterface_DawnInterface_createGeneralRayDamageSpell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GeneralRayDamageSpell* tolua_ret = (GeneralRayDamageSpell*)  DawnInterface::createGeneralRayDamageSpell();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GeneralRayDamageSpell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createGeneralRayDamageSpell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::createGeneralAreaDamageSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_createGeneralAreaDamageSpell00
static int tolua_LuaInterface_DawnInterface_createGeneralAreaDamageSpell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GeneralAreaDamageSpell* tolua_ret = (GeneralAreaDamageSpell*)  DawnInterface::createGeneralAreaDamageSpell();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GeneralAreaDamageSpell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createGeneralAreaDamageSpell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::createGeneralBoltDamageSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_createGeneralBoltDamageSpell00
static int tolua_LuaInterface_DawnInterface_createGeneralBoltDamageSpell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GeneralBoltDamageSpell* tolua_ret = (GeneralBoltDamageSpell*)  DawnInterface::createGeneralBoltDamageSpell();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GeneralBoltDamageSpell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createGeneralBoltDamageSpell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::createGeneralHealingSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_createGeneralHealingSpell00
static int tolua_LuaInterface_DawnInterface_createGeneralHealingSpell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GeneralHealingSpell* tolua_ret = (GeneralHealingSpell*)  DawnInterface::createGeneralHealingSpell();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GeneralHealingSpell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createGeneralHealingSpell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::createGeneralBuffSpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_createGeneralBuffSpell00
static int tolua_LuaInterface_DawnInterface_createGeneralBuffSpell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GeneralBuffSpell* tolua_ret = (GeneralBuffSpell*)  DawnInterface::createGeneralBuffSpell();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GeneralBuffSpell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createGeneralBuffSpell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::createMeleeDamageAction */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_createMeleeDamageAction00
static int tolua_LuaInterface_DawnInterface_createMeleeDamageAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   MeleeDamageAction* tolua_ret = (MeleeDamageAction*)  DawnInterface::createMeleeDamageAction();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"MeleeDamageAction");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createMeleeDamageAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::createRangedDamageAction */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_createRangedDamageAction00
static int tolua_LuaInterface_DawnInterface_createRangedDamageAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   RangedDamageAction* tolua_ret = (RangedDamageAction*)  DawnInterface::createRangedDamageAction();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RangedDamageAction");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createRangedDamageAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::copySpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_copySpell00
static int tolua_LuaInterface_DawnInterface_copySpell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralRayDamageSpell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GeneralRayDamageSpell* other = ((GeneralRayDamageSpell*)  tolua_tousertype(tolua_S,1,0));
  {
   GeneralRayDamageSpell* tolua_ret = (GeneralRayDamageSpell*)  DawnInterface::copySpell(other);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GeneralRayDamageSpell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'copySpell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::copySpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_copySpell01
static int tolua_LuaInterface_DawnInterface_copySpell01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralAreaDamageSpell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  GeneralAreaDamageSpell* other = ((GeneralAreaDamageSpell*)  tolua_tousertype(tolua_S,1,0));
  {
   GeneralAreaDamageSpell* tolua_ret = (GeneralAreaDamageSpell*)  DawnInterface::copySpell(other);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GeneralAreaDamageSpell");
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaInterface_DawnInterface_copySpell00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::copySpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_copySpell02
static int tolua_LuaInterface_DawnInterface_copySpell02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralBoltDamageSpell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  GeneralBoltDamageSpell* other = ((GeneralBoltDamageSpell*)  tolua_tousertype(tolua_S,1,0));
  {
   GeneralBoltDamageSpell* tolua_ret = (GeneralBoltDamageSpell*)  DawnInterface::copySpell(other);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GeneralBoltDamageSpell");
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaInterface_DawnInterface_copySpell01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::copySpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_copySpell03
static int tolua_LuaInterface_DawnInterface_copySpell03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralHealingSpell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  GeneralHealingSpell* other = ((GeneralHealingSpell*)  tolua_tousertype(tolua_S,1,0));
  {
   GeneralHealingSpell* tolua_ret = (GeneralHealingSpell*)  DawnInterface::copySpell(other);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GeneralHealingSpell");
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaInterface_DawnInterface_copySpell02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::copySpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_copySpell04
static int tolua_LuaInterface_DawnInterface_copySpell04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GeneralBuffSpell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  GeneralBuffSpell* other = ((GeneralBuffSpell*)  tolua_tousertype(tolua_S,1,0));
  {
   GeneralBuffSpell* tolua_ret = (GeneralBuffSpell*)  DawnInterface::copySpell(other);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GeneralBuffSpell");
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaInterface_DawnInterface_copySpell03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::copySpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_copySpell05
static int tolua_LuaInterface_DawnInterface_copySpell05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MeleeDamageAction",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  MeleeDamageAction* other = ((MeleeDamageAction*)  tolua_tousertype(tolua_S,1,0));
  {
   MeleeDamageAction* tolua_ret = (MeleeDamageAction*)  DawnInterface::copySpell(other);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"MeleeDamageAction");
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaInterface_DawnInterface_copySpell04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::copySpell */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_copySpell06
static int tolua_LuaInterface_DawnInterface_copySpell06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RangedDamageAction",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  RangedDamageAction* other = ((RangedDamageAction*)  tolua_tousertype(tolua_S,1,0));
  {
   RangedDamageAction* tolua_ret = (RangedDamageAction*)  DawnInterface::copySpell(other);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RangedDamageAction");
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaInterface_DawnInterface_copySpell05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::inscribeSpellInPlayerSpellbook */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_inscribeSpellInPlayerSpellbook00
static int tolua_LuaInterface_DawnInterface_inscribeSpellInPlayerSpellbook00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSpellActionBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSpellActionBase* inscribedSpell = ((CSpellActionBase*)  tolua_tousertype(tolua_S,1,0));
  {
   DawnInterface::inscribeSpellInPlayerSpellbook(inscribedSpell);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'inscribeSpellInPlayerSpellbook'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::addInteractionPoint */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_addInteractionPoint00
static int tolua_LuaInterface_DawnInterface_addInteractionPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   InteractionPoint* tolua_ret = (InteractionPoint*)  DawnInterface::addInteractionPoint();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"InteractionPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addInteractionPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::addCharacterInteractionPoint */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_addCharacterInteractionPoint00
static int tolua_LuaInterface_DawnInterface_addCharacterInteractionPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* character = ((CCharacter*)  tolua_tousertype(tolua_S,1,0));
  {
   InteractionPoint* tolua_ret = (InteractionPoint*)  DawnInterface::addCharacterInteractionPoint(character);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"InteractionPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addCharacterInteractionPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::addInteractionRegion */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_addInteractionRegion00
static int tolua_LuaInterface_DawnInterface_addInteractionRegion00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   InteractionRegion* tolua_ret = (InteractionRegion*)  DawnInterface::addInteractionRegion();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"InteractionRegion");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addInteractionRegion'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::createTextWindow */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_createTextWindow00
static int tolua_LuaInterface_DawnInterface_createTextWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TextWindow* tolua_ret = (TextWindow*)  DawnInterface::createTextWindow();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TextWindow");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createTextWindow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::removeInteractionPoint */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_removeInteractionPoint00
static int tolua_LuaInterface_DawnInterface_removeInteractionPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"InteractionPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  InteractionPoint* pointToRemove = ((InteractionPoint*)  tolua_tousertype(tolua_S,1,0));
  {
   DawnInterface::removeInteractionPoint(pointToRemove);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeInteractionPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::removeInteractionRegion */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_removeInteractionRegion00
static int tolua_LuaInterface_DawnInterface_removeInteractionRegion00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"InteractionRegion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  InteractionRegion* regionToRemove = ((InteractionRegion*)  tolua_tousertype(tolua_S,1,0));
  {
   DawnInterface::removeInteractionRegion(regionToRemove);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeInteractionRegion'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::createEventHandler */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_createEventHandler00
static int tolua_LuaInterface_DawnInterface_createEventHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LuaCallIndirection* tolua_ret = (LuaCallIndirection*)  DawnInterface::createEventHandler();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"LuaCallIndirection");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createEventHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::addQuest */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_addQuest00
static int tolua_LuaInterface_DawnInterface_addQuest00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::string questName = ((std::string)  tolua_tocppstring(tolua_S,1,0));
  std::string questDescription = ((std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   Quest* tolua_ret = (Quest*)  DawnInterface::addQuest(questName,questDescription);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Quest");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addQuest'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::addShop */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_addShop00
static int tolua_LuaInterface_DawnInterface_addShop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Shop* tolua_ret = (Shop*)  DawnInterface::addShop();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Shop");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addShop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::enterZone */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_enterZone00
static int tolua_LuaInterface_DawnInterface_enterZone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::string zoneName = ((std::string)  tolua_tocppstring(tolua_S,1,0));
  int enterX = ((int)  tolua_tonumber(tolua_S,2,0));
  int enterY = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   DawnInterface::enterZone(zoneName,enterX,enterY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'enterZone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::isSavingAllowed */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_isSavingAllowed00
static int tolua_LuaInterface_DawnInterface_isSavingAllowed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   bool tolua_ret = (bool)  DawnInterface::isSavingAllowed();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSavingAllowed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::setSavingAllowed */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_setSavingAllowed00
static int tolua_LuaInterface_DawnInterface_setSavingAllowed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isboolean(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool savingAllowed = ((bool)  tolua_toboolean(tolua_S,1,0));
  {
   DawnInterface::setSavingAllowed(savingAllowed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSavingAllowed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::setBackgroundMusic */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_setBackgroundMusic00
static int tolua_LuaInterface_DawnInterface_setBackgroundMusic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::string filename = ((std::string)  tolua_tocppstring(tolua_S,1,0));
  {
   DawnInterface::setBackgroundMusic(filename);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundMusic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::getPlayer */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_getPlayer00
static int tolua_LuaInterface_DawnInterface_getPlayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Player* tolua_ret = (Player*)  DawnInterface::getPlayer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Player");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPlayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::getInventorySaveText */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_getInventorySaveText00
static int tolua_LuaInterface_DawnInterface_getInventorySaveText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::string tolua_ret = (std::string)  DawnInterface::getInventorySaveText();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInventorySaveText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::getSpellbookSaveText */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_getSpellbookSaveText00
static int tolua_LuaInterface_DawnInterface_getSpellbookSaveText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::string tolua_ret = (std::string)  DawnInterface::getSpellbookSaveText();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSpellbookSaveText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::restoreItemInBackpack */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_restoreItemInBackpack00
static int tolua_LuaInterface_DawnInterface_restoreItemInBackpack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Item",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Item* item = ((Item*)  tolua_tousertype(tolua_S,1,0));
  int inventoryPosX = ((int)  tolua_tonumber(tolua_S,2,0));
  int inventoryPosY = ((int)  tolua_tonumber(tolua_S,3,0));
  int stackSize = ((int)  tolua_tonumber(tolua_S,4,1));
  {
   DawnInterface::restoreItemInBackpack(item,inventoryPosX,inventoryPosY,stackSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'restoreItemInBackpack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::restoreWieldItem */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_restoreWieldItem00
static int tolua_LuaInterface_DawnInterface_restoreWieldItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Item",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int slot = ((int)  tolua_tonumber(tolua_S,1,0));
  Item* item = ((Item*)  tolua_tousertype(tolua_S,2,0));
  {
   DawnInterface::restoreWieldItem(slot,item);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'restoreWieldItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::restoreGroundLootItem */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_restoreGroundLootItem00
static int tolua_LuaInterface_DawnInterface_restoreGroundLootItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Item",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Item* item = ((Item*)  tolua_tousertype(tolua_S,1,0));
  int xPos = ((int)  tolua_tonumber(tolua_S,2,0));
  int yPos = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   DawnInterface::restoreGroundLootItem(item,xPos,yPos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'restoreGroundLootItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::restoreGroundGold */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_restoreGroundGold00
static int tolua_LuaInterface_DawnInterface_restoreGroundGold00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int amount = ((int)  tolua_tonumber(tolua_S,1,0));
  int xPos = ((int)  tolua_tonumber(tolua_S,2,0));
  int yPos = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   DawnInterface::restoreGroundGold(amount,xPos,yPos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'restoreGroundGold'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::setCurrentZone */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_setCurrentZone00
static int tolua_LuaInterface_DawnInterface_setCurrentZone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::string zoneName = ((std::string)  tolua_tocppstring(tolua_S,1,0));
  {
   DawnInterface::setCurrentZone(zoneName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCurrentZone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::getAllZonesSaveText */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_getAllZonesSaveText00
static int tolua_LuaInterface_DawnInterface_getAllZonesSaveText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::string tolua_ret = (std::string)  DawnInterface::getAllZonesSaveText();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAllZonesSaveText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::getReenterCurrentZoneText */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_getReenterCurrentZoneText00
static int tolua_LuaInterface_DawnInterface_getReenterCurrentZoneText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::string tolua_ret = (std::string)  DawnInterface::getReenterCurrentZoneText();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getReenterCurrentZoneText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::getItemReferenceRestore */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_getItemReferenceRestore00
static int tolua_LuaInterface_DawnInterface_getItemReferenceRestore00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCharacter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCharacter* character = ((CCharacter*)  tolua_tousertype(tolua_S,1,0));
  {
   std::string tolua_ret = (std::string)  DawnInterface::getItemReferenceRestore(character);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItemReferenceRestore'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::getItemReferenceRestore */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_getItemReferenceRestore01
static int tolua_LuaInterface_DawnInterface_getItemReferenceRestore01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"InteractionPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  InteractionPoint* interactionPoint = ((InteractionPoint*)  tolua_tousertype(tolua_S,1,0));
  {
   std::string tolua_ret = (std::string)  DawnInterface::getItemReferenceRestore(interactionPoint);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaInterface_DawnInterface_getItemReferenceRestore00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::getItemReferenceRestore */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_getItemReferenceRestore02
static int tolua_LuaInterface_DawnInterface_getItemReferenceRestore02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"InteractionRegion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  InteractionRegion* interactionRegion = ((InteractionRegion*)  tolua_tousertype(tolua_S,1,0));
  {
   std::string tolua_ret = (std::string)  DawnInterface::getItemReferenceRestore(interactionRegion);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaInterface_DawnInterface_getItemReferenceRestore01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::getItemReferenceRestore */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_getItemReferenceRestore03
static int tolua_LuaInterface_DawnInterface_getItemReferenceRestore03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Shop",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Shop* shop = ((Shop*)  tolua_tousertype(tolua_S,1,0));
  {
   std::string tolua_ret = (std::string)  DawnInterface::getItemReferenceRestore(shop);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaInterface_DawnInterface_getItemReferenceRestore02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::getItemReferenceRestore */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_getItemReferenceRestore04
static int tolua_LuaInterface_DawnInterface_getItemReferenceRestore04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CallIndirection",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CallIndirection* eventHandler = ((CallIndirection*)  tolua_tousertype(tolua_S,1,0));
  {
   std::string tolua_ret = (std::string)  DawnInterface::getItemReferenceRestore(eventHandler);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaInterface_DawnInterface_getItemReferenceRestore03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::getItemReferenceRestore */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_getItemReferenceRestore05
static int tolua_LuaInterface_DawnInterface_getItemReferenceRestore05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Quest",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Quest* quest = ((Quest*)  tolua_tousertype(tolua_S,1,0));
  {
   std::string tolua_ret = (std::string)  DawnInterface::getItemReferenceRestore(quest);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaInterface_DawnInterface_getItemReferenceRestore04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::getItemReferenceRestore */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_getItemReferenceRestore06
static int tolua_LuaInterface_DawnInterface_getItemReferenceRestore06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TextWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  TextWindow* textWindow = ((TextWindow*)  tolua_tousertype(tolua_S,1,0));
  {
   std::string tolua_ret = (std::string)  DawnInterface::getItemReferenceRestore(textWindow);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaInterface_DawnInterface_getItemReferenceRestore05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::getReinitialisationString */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_getReinitialisationString00
static int tolua_LuaInterface_DawnInterface_getReinitialisationString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::string fullVarName = ((std::string)  tolua_tocppstring(tolua_S,1,0));
  void* ignore = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   std::string tolua_ret = (std::string)  DawnInterface::getReinitialisationString(fullVarName,ignore);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getReinitialisationString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::getReinitialisationString */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_getReinitialisationString01
static int tolua_LuaInterface_DawnInterface_getReinitialisationString01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Quest",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  std::string fullVarName = ((std::string)  tolua_tocppstring(tolua_S,1,0));
  Quest* quest = ((Quest*)  tolua_tousertype(tolua_S,2,0));
  {
   std::string tolua_ret = (std::string)  DawnInterface::getReinitialisationString(fullVarName,quest);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaInterface_DawnInterface_getReinitialisationString00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::restoreCharacterReference */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_restoreCharacterReference00
static int tolua_LuaInterface_DawnInterface_restoreCharacterReference00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::string zoneName = ((std::string)  tolua_tocppstring(tolua_S,1,0));
  int posInArray = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   CCharacter* tolua_ret = (CCharacter*)  DawnInterface::restoreCharacterReference(zoneName,posInArray);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCharacter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'restoreCharacterReference'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::restoreInteractionPointReference */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_restoreInteractionPointReference00
static int tolua_LuaInterface_DawnInterface_restoreInteractionPointReference00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::string zoneName = ((std::string)  tolua_tocppstring(tolua_S,1,0));
  int posInArray = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   InteractionPoint* tolua_ret = (InteractionPoint*)  DawnInterface::restoreInteractionPointReference(zoneName,posInArray);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"InteractionPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'restoreInteractionPointReference'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::restoreInteractionRegionReference */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_restoreInteractionRegionReference00
static int tolua_LuaInterface_DawnInterface_restoreInteractionRegionReference00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::string zoneName = ((std::string)  tolua_tocppstring(tolua_S,1,0));
  int posInArray = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   InteractionRegion* tolua_ret = (InteractionRegion*)  DawnInterface::restoreInteractionRegionReference(zoneName,posInArray);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"InteractionRegion");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'restoreInteractionRegionReference'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::restoreEventHandlerReference */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_restoreEventHandlerReference00
static int tolua_LuaInterface_DawnInterface_restoreEventHandlerReference00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_iscppstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::string zoneName = ((std::string)  tolua_tocppstring(tolua_S,1,0));
  int posInArray = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   CallIndirection* tolua_ret = (CallIndirection*)  DawnInterface::restoreEventHandlerReference(zoneName,posInArray);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CallIndirection");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'restoreEventHandlerReference'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::getActionbarSaveText */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_getActionbarSaveText00
static int tolua_LuaInterface_DawnInterface_getActionbarSaveText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::string tolua_ret = (std::string)  DawnInterface::getActionbarSaveText();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getActionbarSaveText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: DawnInterface::restoreActionBar */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_DawnInterface_restoreActionBar00
static int tolua_LuaInterface_DawnInterface_restoreActionBar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CSpellActionBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int buttonNr = ((int)  tolua_tonumber(tolua_S,1,0));
  CSpellActionBase* action = ((CSpellActionBase*)  tolua_tousertype(tolua_S,2,0));
  {
   DawnInterface::restoreActionBar(buttonNr,action);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'restoreActionBar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addEquivalentTile of class  AdjacencyEquivalenceClass */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_AdjacencyEquivalenceClass_addEquivalentTile00
static int tolua_LuaInterface_AdjacencyEquivalenceClass_addEquivalentTile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AdjacencyEquivalenceClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AdjacencyEquivalenceClass* self = (AdjacencyEquivalenceClass*)  tolua_tousertype(tolua_S,1,0);
  int tile = ((int)  tolua_tonumber(tolua_S,2,0));
  int offsetX = ((int)  tolua_tonumber(tolua_S,3,0));
  int offsetY = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addEquivalentTile'", NULL);
#endif
  {
   self->addEquivalentTile(tile,offsetX,offsetY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addEquivalentTile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTile of class  TileSet */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_TileSet_addTile00
static int tolua_LuaInterface_TileSet_addTile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TileSet",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TileSet* self = (TileSet*)  tolua_tousertype(tolua_S,1,0);
  std::string filename = ((std::string)  tolua_tocppstring(tolua_S,2,0));
  TileClassificationType::TileClassificationType tileType = ((TileClassificationType::TileClassificationType) (int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addTile'", NULL);
#endif
  {
   int tolua_ret = (int)  self->addTile(filename,tileType);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addTile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTileWithCollisionBox of class  TileSet */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_TileSet_addTileWithCollisionBox00
static int tolua_LuaInterface_TileSet_addTileWithCollisionBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TileSet",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TileSet* self = (TileSet*)  tolua_tousertype(tolua_S,1,0);
  std::string filename = ((std::string)  tolua_tocppstring(tolua_S,2,0));
  TileClassificationType::TileClassificationType tileType = ((TileClassificationType::TileClassificationType) (int)  tolua_tonumber(tolua_S,3,0));
  int cbx = ((int)  tolua_tonumber(tolua_S,4,0));
  int cby = ((int)  tolua_tonumber(tolua_S,5,0));
  int cbw = ((int)  tolua_tonumber(tolua_S,6,0));
  int cbh = ((int)  tolua_tonumber(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addTileWithCollisionBox'", NULL);
#endif
  {
   int tolua_ret = (int)  self->addTileWithCollisionBox(filename,tileType,cbx,cby,cbw,cbh);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addTileWithCollisionBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addAdjacency of class  TileSet */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_TileSet_addAdjacency00
static int tolua_LuaInterface_TileSet_addAdjacency00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TileSet",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TileSet* self = (TileSet*)  tolua_tousertype(tolua_S,1,0);
  int tile1 = ((int)  tolua_tonumber(tolua_S,2,0));
  AdjacencyType::AdjacencyType adjacencyType = ((AdjacencyType::AdjacencyType) (int)  tolua_tonumber(tolua_S,3,0));
  int tile2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int offsetX = ((int)  tolua_tonumber(tolua_S,5,0));
  int offsetY = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addAdjacency'", NULL);
#endif
  {
   self->addAdjacency(tile1,adjacencyType,tile2,offsetX,offsetY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addAdjacency'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createAdjacencyEquivalenceClass of class  TileSet */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_TileSet_createAdjacencyEquivalenceClass00
static int tolua_LuaInterface_TileSet_createAdjacencyEquivalenceClass00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TileSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TileSet* self = (TileSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createAdjacencyEquivalenceClass'", NULL);
#endif
  {
   AdjacencyEquivalenceClass* tolua_ret = (AdjacencyEquivalenceClass*)  self->createAdjacencyEquivalenceClass();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AdjacencyEquivalenceClass");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createAdjacencyEquivalenceClass'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addEquivalenceAdjacency of class  TileSet */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_TileSet_addEquivalenceAdjacency00
static int tolua_LuaInterface_TileSet_addEquivalenceAdjacency00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TileSet",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"AdjacencyEquivalenceClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"AdjacencyEquivalenceClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TileSet* self = (TileSet*)  tolua_tousertype(tolua_S,1,0);
  AdjacencyEquivalenceClass* class1 = ((AdjacencyEquivalenceClass*)  tolua_tousertype(tolua_S,2,0));
  AdjacencyType::AdjacencyType adjacencyType = ((AdjacencyType::AdjacencyType) (int)  tolua_tonumber(tolua_S,3,0));
  AdjacencyEquivalenceClass* class2 = ((AdjacencyEquivalenceClass*)  tolua_tousertype(tolua_S,4,0));
  int offsetX = ((int)  tolua_tonumber(tolua_S,5,0));
  int offsetY = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addEquivalenceAdjacency'", NULL);
#endif
  {
   self->addEquivalenceAdjacency(class1,adjacencyType,class2,offsetX,offsetY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addEquivalenceAdjacency'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: printTileSet of class  TileSet */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_TileSet_printTileSet00
static int tolua_LuaInterface_TileSet_printTileSet00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const TileSet",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const TileSet* self = (const TileSet*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'printTileSet'", NULL);
#endif
  {
   self->printTileSet();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'printTileSet'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: EditorInterface::getTileSet */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_EditorInterface_getTileSet00
static int tolua_LuaInterface_EditorInterface_getTileSet00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   TileSet* tolua_ret = (TileSet*)  EditorInterface::getTileSet();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TileSet");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTileSet'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: EditorInterface::addGroundTile */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_EditorInterface_addGroundTile00
static int tolua_LuaInterface_EditorInterface_addGroundTile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int posX = ((int)  tolua_tonumber(tolua_S,1,0));
  int posY = ((int)  tolua_tonumber(tolua_S,2,0));
  int tile = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   EditorInterface::addGroundTile(posX,posY,tile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addGroundTile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: EditorInterface::addEnvironment */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_EditorInterface_addEnvironment00
static int tolua_LuaInterface_EditorInterface_addEnvironment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int posX = ((int)  tolua_tonumber(tolua_S,1,0));
  int posY = ((int)  tolua_tonumber(tolua_S,2,0));
  int posZ = ((int)  tolua_tonumber(tolua_S,3,0));
  int tile = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   EditorInterface::addEnvironment(posX,posY,posZ,tile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addEnvironment'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: EditorInterface::adjustLastRGBA */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_EditorInterface_adjustLastRGBA00
static int tolua_LuaInterface_EditorInterface_adjustLastRGBA00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double red = ((double)  tolua_tonumber(tolua_S,1,0));
  double green = ((double)  tolua_tonumber(tolua_S,2,0));
  double blue = ((double)  tolua_tonumber(tolua_S,3,0));
  double alpha = ((double)  tolua_tonumber(tolua_S,4,0));
  {
   EditorInterface::adjustLastRGBA(red,green,blue,alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'adjustLastRGBA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: EditorInterface::adjustLastScale */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_EditorInterface_adjustLastScale00
static int tolua_LuaInterface_EditorInterface_adjustLastScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double scaleX = ((double)  tolua_tonumber(tolua_S,1,0));
  double scaleY = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   EditorInterface::adjustLastScale(scaleX,scaleY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'adjustLastScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: EditorInterface::addCollisionRect */
#ifndef TOLUA_DISABLE_tolua_LuaInterface_EditorInterface_addCollisionRect00
static int tolua_LuaInterface_EditorInterface_addCollisionRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int lrx = ((int)  tolua_tonumber(tolua_S,1,0));
  int lry = ((int)  tolua_tonumber(tolua_S,2,0));
  int width = ((int)  tolua_tonumber(tolua_S,3,0));
  int height = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   EditorInterface::addCollisionRect(lrx,lry,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addCollisionRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_LuaInterface_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"Configuration",0);
  tolua_beginmodule(tolua_S,"Configuration");
   tolua_function(tolua_S,"setResolution",tolua_LuaInterface_Configuration_setResolution00);
   tolua_function(tolua_S,"setBpp",tolua_LuaInterface_Configuration_setBpp00);
   tolua_function(tolua_S,"useFullscreen",tolua_LuaInterface_Configuration_useFullscreen00);
   tolua_function(tolua_S,"useSound",tolua_LuaInterface_Configuration_useSound00);
   tolua_function(tolua_S,"showDebugStdout",tolua_LuaInterface_Configuration_showDebugStdout00);
   tolua_function(tolua_S,"showDebugFileout",tolua_LuaInterface_Configuration_showDebugFileout00);
   tolua_function(tolua_S,"showInfoMessages",tolua_LuaInterface_Configuration_showInfoMessages00);
   tolua_function(tolua_S,"showWarningMessages",tolua_LuaInterface_Configuration_showWarningMessages00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"STOP",STOP);
  tolua_constant(tolua_S,"N",N);
  tolua_constant(tolua_S,"NE",NE);
  tolua_constant(tolua_S,"E",E);
  tolua_constant(tolua_S,"SE",SE);
  tolua_constant(tolua_S,"S",S);
  tolua_constant(tolua_S,"SW",SW);
  tolua_constant(tolua_S,"W",W);
  tolua_constant(tolua_S,"NW",NW);
  tolua_module(tolua_S,"ActivityType",0);
  tolua_beginmodule(tolua_S,"ActivityType");
   tolua_constant(tolua_S,"Walking",ActivityType::Walking);
   tolua_constant(tolua_S,"Casting",ActivityType::Casting);
   tolua_constant(tolua_S,"Attacking",ActivityType::Attacking);
   tolua_constant(tolua_S,"Shooting",ActivityType::Shooting);
   tolua_constant(tolua_S,"Dying",ActivityType::Dying);
   tolua_constant(tolua_S,"Count",ActivityType::Count);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Attitude",0);
  tolua_beginmodule(tolua_S,"Attitude");
   tolua_constant(tolua_S,"FRIENDLY",Attitude::FRIENDLY);
   tolua_constant(tolua_S,"NEUTRAL",Attitude::NEUTRAL);
   tolua_constant(tolua_S,"HOSTILE",Attitude::HOSTILE);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"CharacterClass",0);
  tolua_beginmodule(tolua_S,"CharacterClass");
   tolua_constant(tolua_S,"NOCLASS",CharacterClass::NOCLASS);
   tolua_constant(tolua_S,"ANYCLASS",CharacterClass::ANYCLASS);
   tolua_constant(tolua_S,"Liche",CharacterClass::Liche);
   tolua_constant(tolua_S,"Ranger",CharacterClass::Ranger);
   tolua_constant(tolua_S,"Warrior",CharacterClass::Warrior);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"CharacterStates",0);
  tolua_beginmodule(tolua_S,"CharacterStates");
   tolua_constant(tolua_S,"Channeling",CharacterStates::Channeling);
   tolua_constant(tolua_S,"Charmed",CharacterStates::Charmed);
   tolua_constant(tolua_S,"Confused",CharacterStates::Confused);
   tolua_constant(tolua_S,"Feared",CharacterStates::Feared);
   tolua_constant(tolua_S,"Invisible",CharacterStates::Invisible);
   tolua_constant(tolua_S,"Mesmerized",CharacterStates::Mesmerized);
   tolua_constant(tolua_S,"Movementspeed",CharacterStates::Movementspeed);
   tolua_constant(tolua_S,"SeeInvisible",CharacterStates::SeeInvisible);
   tolua_constant(tolua_S,"SeeSneaking",CharacterStates::SeeSneaking);
   tolua_constant(tolua_S,"Sneaking",CharacterStates::Sneaking);
   tolua_constant(tolua_S,"Stunned",CharacterStates::Stunned);
   tolua_constant(tolua_S,"NOEFFECT",CharacterStates::NOEFFECT);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCharacter","CCharacter","",NULL);
  tolua_beginmodule(tolua_S,"CCharacter");
   tolua_function(tolua_S,"baseOnType",tolua_LuaInterface_CCharacter_baseOnType00);
   tolua_function(tolua_S,"setStrength",tolua_LuaInterface_CCharacter_setStrength00);
   tolua_function(tolua_S,"getStrength",tolua_LuaInterface_CCharacter_getStrength00);
   tolua_function(tolua_S,"modifyStrength",tolua_LuaInterface_CCharacter_modifyStrength00);
   tolua_function(tolua_S,"setDexterity",tolua_LuaInterface_CCharacter_setDexterity00);
   tolua_function(tolua_S,"getDexterity",tolua_LuaInterface_CCharacter_getDexterity00);
   tolua_function(tolua_S,"modifyDexterity",tolua_LuaInterface_CCharacter_modifyDexterity00);
   tolua_function(tolua_S,"setVitality",tolua_LuaInterface_CCharacter_setVitality00);
   tolua_function(tolua_S,"getVitality",tolua_LuaInterface_CCharacter_getVitality00);
   tolua_function(tolua_S,"modifyVitality",tolua_LuaInterface_CCharacter_modifyVitality00);
   tolua_function(tolua_S,"setIntellect",tolua_LuaInterface_CCharacter_setIntellect00);
   tolua_function(tolua_S,"getIntellect",tolua_LuaInterface_CCharacter_getIntellect00);
   tolua_function(tolua_S,"modifyIntellect",tolua_LuaInterface_CCharacter_modifyIntellect00);
   tolua_function(tolua_S,"setWisdom",tolua_LuaInterface_CCharacter_setWisdom00);
   tolua_function(tolua_S,"getWisdom",tolua_LuaInterface_CCharacter_getWisdom00);
   tolua_function(tolua_S,"modifyWisdom",tolua_LuaInterface_CCharacter_modifyWisdom00);
   tolua_function(tolua_S,"setMaxHealth",tolua_LuaInterface_CCharacter_setMaxHealth00);
   tolua_function(tolua_S,"getMaxHealth",tolua_LuaInterface_CCharacter_getMaxHealth00);
   tolua_function(tolua_S,"modifyMaxHealth",tolua_LuaInterface_CCharacter_modifyMaxHealth00);
   tolua_function(tolua_S,"setMaxMana",tolua_LuaInterface_CCharacter_setMaxMana00);
   tolua_function(tolua_S,"getMaxMana",tolua_LuaInterface_CCharacter_getMaxMana00);
   tolua_function(tolua_S,"modifyMaxMana",tolua_LuaInterface_CCharacter_modifyMaxMana00);
   tolua_function(tolua_S,"setMaxFatigue",tolua_LuaInterface_CCharacter_setMaxFatigue00);
   tolua_function(tolua_S,"getMaxFatigue",tolua_LuaInterface_CCharacter_getMaxFatigue00);
   tolua_function(tolua_S,"modifyMaxFatigue",tolua_LuaInterface_CCharacter_modifyMaxFatigue00);
   tolua_function(tolua_S,"setExperienceValue",tolua_LuaInterface_CCharacter_setExperienceValue00);
   tolua_function(tolua_S,"setNumMoveTexturesPerDirection",tolua_LuaInterface_CCharacter_setNumMoveTexturesPerDirection00);
   tolua_function(tolua_S,"setMoveTexture",tolua_LuaInterface_CCharacter_setMoveTexture00);
   tolua_function(tolua_S,"setClass",tolua_LuaInterface_CCharacter_setClass00);
   tolua_function(tolua_S,"setCoins",tolua_LuaInterface_CCharacter_setCoins00);
   tolua_function(tolua_S,"setWanderRadius",tolua_LuaInterface_CCharacter_setWanderRadius00);
   tolua_function(tolua_S,"getWanderRadius",tolua_LuaInterface_CCharacter_getWanderRadius00);
   tolua_function(tolua_S,"setName",tolua_LuaInterface_CCharacter_setName00);
   tolua_function(tolua_S,"getName",tolua_LuaInterface_CCharacter_getName00);
   tolua_function(tolua_S,"setLevel",tolua_LuaInterface_CCharacter_setLevel00);
   tolua_function(tolua_S,"getLevel",tolua_LuaInterface_CCharacter_getLevel00);
   tolua_function(tolua_S,"setExperience",tolua_LuaInterface_CCharacter_setExperience00);
   tolua_function(tolua_S,"setMinDamage",tolua_LuaInterface_CCharacter_setMinDamage00);
   tolua_function(tolua_S,"getMinDamage",tolua_LuaInterface_CCharacter_getMinDamage00);
   tolua_function(tolua_S,"setMaxDamage",tolua_LuaInterface_CCharacter_setMaxDamage00);
   tolua_function(tolua_S,"getMaxDamage",tolua_LuaInterface_CCharacter_getMaxDamage00);
   tolua_function(tolua_S,"setArmor",tolua_LuaInterface_CCharacter_setArmor00);
   tolua_function(tolua_S,"setDamageModifierPoints",tolua_LuaInterface_CCharacter_setDamageModifierPoints00);
   tolua_function(tolua_S,"setHitModifierPoints",tolua_LuaInterface_CCharacter_setHitModifierPoints00);
   tolua_function(tolua_S,"setEvadeModifierPoints",tolua_LuaInterface_CCharacter_setEvadeModifierPoints00);
   tolua_function(tolua_S,"setParryModifierPoints",tolua_LuaInterface_CCharacter_setParryModifierPoints00);
   tolua_function(tolua_S,"setBlockModifierPoints",tolua_LuaInterface_CCharacter_setBlockModifierPoints00);
   tolua_function(tolua_S,"setMeleeCriticalModifierPoints",tolua_LuaInterface_CCharacter_setMeleeCriticalModifierPoints00);
   tolua_function(tolua_S,"setResistElementModifierPoints",tolua_LuaInterface_CCharacter_setResistElementModifierPoints00);
   tolua_function(tolua_S,"setResistAllModifierPoints",tolua_LuaInterface_CCharacter_setResistAllModifierPoints00);
   tolua_function(tolua_S,"setSpellEffectElementModifierPoints",tolua_LuaInterface_CCharacter_setSpellEffectElementModifierPoints00);
   tolua_function(tolua_S,"setSpellEffectAllModifierPoints",tolua_LuaInterface_CCharacter_setSpellEffectAllModifierPoints00);
   tolua_function(tolua_S,"setSpellCriticalModifierPoints",tolua_LuaInterface_CCharacter_setSpellCriticalModifierPoints00);
   tolua_function(tolua_S,"setHealthRegen",tolua_LuaInterface_CCharacter_setHealthRegen00);
   tolua_function(tolua_S,"setManaRegen",tolua_LuaInterface_CCharacter_setManaRegen00);
   tolua_function(tolua_S,"setFatigueRegen",tolua_LuaInterface_CCharacter_setFatigueRegen00);
   tolua_function(tolua_S,"setBoundingBox",tolua_LuaInterface_CCharacter_setBoundingBox00);
   tolua_function(tolua_S,"setUseBoundingBox",tolua_LuaInterface_CCharacter_setUseBoundingBox00);
   tolua_function(tolua_S,"addItemToLootTable",tolua_LuaInterface_CCharacter_addItemToLootTable00);
   tolua_function(tolua_S,"setCoinDrop",tolua_LuaInterface_CCharacter_setCoinDrop00);
   tolua_function(tolua_S,"setPosition",tolua_LuaInterface_CCharacter_setPosition00);
   tolua_function(tolua_S,"inscribeSpellInSpellbook",tolua_LuaInterface_CCharacter_inscribeSpellInSpellbook00);
   tolua_function(tolua_S,"getClass",tolua_LuaInterface_CCharacter_getClass00);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"StatsType",0);
  tolua_beginmodule(tolua_S,"StatsType");
   tolua_constant(tolua_S,"Dexterity",StatsType::Dexterity);
   tolua_constant(tolua_S,"Intellect",StatsType::Intellect);
   tolua_constant(tolua_S,"Strength",StatsType::Strength);
   tolua_constant(tolua_S,"Vitality",StatsType::Vitality);
   tolua_constant(tolua_S,"Wisdom",StatsType::Wisdom);
   tolua_constant(tolua_S,"Health",StatsType::Health);
   tolua_constant(tolua_S,"Mana",StatsType::Mana);
   tolua_constant(tolua_S,"Fatigue",StatsType::Fatigue);
   tolua_constant(tolua_S,"Armor",StatsType::Armor);
   tolua_constant(tolua_S,"DamageModifier",StatsType::DamageModifier);
   tolua_constant(tolua_S,"HitModifier",StatsType::HitModifier);
   tolua_constant(tolua_S,"EvadeModifier",StatsType::EvadeModifier);
   tolua_constant(tolua_S,"ParryModifier",StatsType::ParryModifier);
   tolua_constant(tolua_S,"BlockModifier",StatsType::BlockModifier);
   tolua_constant(tolua_S,"MeleeCritical",StatsType::MeleeCritical);
   tolua_constant(tolua_S,"SpellCritical",StatsType::SpellCritical);
   tolua_constant(tolua_S,"ResistAll",StatsType::ResistAll);
   tolua_constant(tolua_S,"SpellEffectAll",StatsType::SpellEffectAll);
   tolua_constant(tolua_S,"HealthRegen",StatsType::HealthRegen);
   tolua_constant(tolua_S,"ManaRegen",StatsType::ManaRegen);
   tolua_constant(tolua_S,"FatigueRegen",StatsType::FatigueRegen);
   tolua_constant(tolua_S,"Count",StatsType::Count);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"ElementType",0);
  tolua_beginmodule(tolua_S,"ElementType");
   tolua_constant(tolua_S,"Fire",ElementType::Fire);
   tolua_constant(tolua_S,"Water",ElementType::Water);
   tolua_constant(tolua_S,"Air",ElementType::Air);
   tolua_constant(tolua_S,"Earth",ElementType::Earth);
   tolua_constant(tolua_S,"Light",ElementType::Light);
   tolua_constant(tolua_S,"Dark",ElementType::Dark);
   tolua_constant(tolua_S,"Count",ElementType::Count);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"EffectType",0);
  tolua_beginmodule(tolua_S,"EffectType");
   tolua_constant(tolua_S,"SingleTargetSpell",EffectType::SingleTargetSpell);
   tolua_constant(tolua_S,"SelfAffectingSpell",EffectType::SelfAffectingSpell);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"PositionType",0);
  tolua_beginmodule(tolua_S,"PositionType");
   tolua_constant(tolua_S,"BOTTOMLEFT",PositionType::BOTTOMLEFT);
   tolua_constant(tolua_S,"BOTTOMCENTER",PositionType::BOTTOMCENTER);
   tolua_constant(tolua_S,"LEFTCENTER",PositionType::LEFTCENTER);
   tolua_constant(tolua_S,"CENTER",PositionType::CENTER);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"ItemQuality",0);
  tolua_beginmodule(tolua_S,"ItemQuality");
   tolua_constant(tolua_S,"POOR",ItemQuality::POOR);
   tolua_constant(tolua_S,"NORMAL",ItemQuality::NORMAL);
   tolua_constant(tolua_S,"ENHANCED",ItemQuality::ENHANCED);
   tolua_constant(tolua_S,"RARE",ItemQuality::RARE);
   tolua_constant(tolua_S,"LORE",ItemQuality::LORE);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"ItemSlot",0);
  tolua_beginmodule(tolua_S,"ItemSlot");
   tolua_constant(tolua_S,"HEAD",ItemSlot::HEAD);
   tolua_constant(tolua_S,"AMULET",ItemSlot::AMULET);
   tolua_constant(tolua_S,"MAIN_HAND",ItemSlot::MAIN_HAND);
   tolua_constant(tolua_S,"OFF_HAND",ItemSlot::OFF_HAND);
   tolua_constant(tolua_S,"BELT",ItemSlot::BELT);
   tolua_constant(tolua_S,"LEGS",ItemSlot::LEGS);
   tolua_constant(tolua_S,"SHOULDER",ItemSlot::SHOULDER);
   tolua_constant(tolua_S,"CHEST",ItemSlot::CHEST);
   tolua_constant(tolua_S,"GLOVES",ItemSlot::GLOVES);
   tolua_constant(tolua_S,"CLOAK",ItemSlot::CLOAK);
   tolua_constant(tolua_S,"BOOTS",ItemSlot::BOOTS);
   tolua_constant(tolua_S,"RING_ONE",ItemSlot::RING_ONE);
   tolua_constant(tolua_S,"RING_TWO",ItemSlot::RING_TWO);
   tolua_constant(tolua_S,"COUNT",ItemSlot::COUNT);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"EquipPosition",0);
  tolua_beginmodule(tolua_S,"EquipPosition");
   tolua_constant(tolua_S,"MAIN_HAND",EquipPosition::MAIN_HAND);
   tolua_constant(tolua_S,"OFF_HAND",EquipPosition::OFF_HAND);
   tolua_constant(tolua_S,"CHEST",EquipPosition::CHEST);
   tolua_constant(tolua_S,"LEGS",EquipPosition::LEGS);
   tolua_constant(tolua_S,"BELT",EquipPosition::BELT);
   tolua_constant(tolua_S,"BOOTS",EquipPosition::BOOTS);
   tolua_constant(tolua_S,"RING",EquipPosition::RING);
   tolua_constant(tolua_S,"GLOVES",EquipPosition::GLOVES);
   tolua_constant(tolua_S,"HEAD",EquipPosition::HEAD);
   tolua_constant(tolua_S,"CLOAK",EquipPosition::CLOAK);
   tolua_constant(tolua_S,"AMULET",EquipPosition::AMULET);
   tolua_constant(tolua_S,"SHOULDER",EquipPosition::SHOULDER);
   tolua_constant(tolua_S,"NONE",EquipPosition::NONE);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"ItemType",0);
  tolua_beginmodule(tolua_S,"ItemType");
   tolua_constant(tolua_S,"QUESTITEM",ItemType::QUESTITEM);
   tolua_constant(tolua_S,"MISCELLANEOUS",ItemType::MISCELLANEOUS);
   tolua_constant(tolua_S,"ARMOR",ItemType::ARMOR);
   tolua_constant(tolua_S,"WEAPON",ItemType::WEAPON);
   tolua_constant(tolua_S,"JEWELRY",ItemType::JEWELRY);
   tolua_constant(tolua_S,"SCROLL",ItemType::SCROLL);
   tolua_constant(tolua_S,"POTION",ItemType::POTION);
   tolua_constant(tolua_S,"FOOD",ItemType::FOOD);
   tolua_constant(tolua_S,"DRINK",ItemType::DRINK);
   tolua_constant(tolua_S,"NEWSPELL",ItemType::NEWSPELL);
   tolua_constant(tolua_S,"COUNT",ItemType::COUNT);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"ArmorType",0);
  tolua_beginmodule(tolua_S,"ArmorType");
   tolua_constant(tolua_S,"NO_ARMOR",ArmorType::NO_ARMOR);
   tolua_constant(tolua_S,"CLOTH",ArmorType::CLOTH);
   tolua_constant(tolua_S,"LEATHER",ArmorType::LEATHER);
   tolua_constant(tolua_S,"MAIL",ArmorType::MAIL);
   tolua_constant(tolua_S,"PLATE",ArmorType::PLATE);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"WeaponType",0);
  tolua_beginmodule(tolua_S,"WeaponType");
   tolua_constant(tolua_S,"NO_WEAPON",WeaponType::NO_WEAPON);
   tolua_constant(tolua_S,"ONEHAND_SWORD",WeaponType::ONEHAND_SWORD);
   tolua_constant(tolua_S,"TWOHAND_SWORD",WeaponType::TWOHAND_SWORD);
   tolua_constant(tolua_S,"DAGGER",WeaponType::DAGGER);
   tolua_constant(tolua_S,"STAFF",WeaponType::STAFF);
   tolua_constant(tolua_S,"ONEHAND_CLUB",WeaponType::ONEHAND_CLUB);
   tolua_constant(tolua_S,"TWOHAND_CLUB",WeaponType::TWOHAND_CLUB);
   tolua_constant(tolua_S,"WAND",WeaponType::WAND);
   tolua_constant(tolua_S,"SPELLBOOK",WeaponType::SPELLBOOK);
   tolua_constant(tolua_S,"ONEHAND_MACE",WeaponType::ONEHAND_MACE);
   tolua_constant(tolua_S,"TWOHAND_MACE",WeaponType::TWOHAND_MACE);
   tolua_constant(tolua_S,"ONEHAND_AXE",WeaponType::ONEHAND_AXE);
   tolua_constant(tolua_S,"TWOHAND_AXE",WeaponType::TWOHAND_AXE);
   tolua_constant(tolua_S,"BOW",WeaponType::BOW);
   tolua_constant(tolua_S,"SLINGSHOT",WeaponType::SLINGSHOT);
   tolua_constant(tolua_S,"CROSSBOW",WeaponType::CROSSBOW);
   tolua_constant(tolua_S,"SHIELD",WeaponType::SHIELD);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"TriggerType",0);
  tolua_beginmodule(tolua_S,"TriggerType");
   tolua_constant(tolua_S,"TAKING_DAMAGE",TriggerType::TAKING_DAMAGE);
   tolua_constant(tolua_S,"EXECUTING_ACTION",TriggerType::EXECUTING_ACTION);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Item","Item","",NULL);
  tolua_beginmodule(tolua_S,"Item");
   tolua_function(tolua_S,"setDescription",tolua_LuaInterface_Item_setDescription00);
   tolua_function(tolua_S,"setStats",tolua_LuaInterface_Item_setStats00);
   tolua_function(tolua_S,"setResistElementModifierPoints",tolua_LuaInterface_Item_setResistElementModifierPoints00);
   tolua_function(tolua_S,"setSpellEffectElementModifierPoints",tolua_LuaInterface_Item_setSpellEffectElementModifierPoints00);
   tolua_function(tolua_S,"setMinDamage",tolua_LuaInterface_Item_setMinDamage00);
   tolua_function(tolua_S,"setMaxDamage",tolua_LuaInterface_Item_setMaxDamage00);
   tolua_function(tolua_S,"setRequiredLevel",tolua_LuaInterface_Item_setRequiredLevel00);
   tolua_function(tolua_S,"setMaxStackSize",tolua_LuaInterface_Item_setMaxStackSize00);
   tolua_function(tolua_S,"setValue",tolua_LuaInterface_Item_setValue00);
   tolua_function(tolua_S,"setSpell",tolua_LuaInterface_Item_setSpell00);
   tolua_function(tolua_S,"addTriggerSpellOnSelf",tolua_LuaInterface_Item_addTriggerSpellOnSelf00);
   tolua_function(tolua_S,"addTriggerSpellOnTarget",tolua_LuaInterface_Item_addTriggerSpellOnTarget00);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"InteractionType",0);
  tolua_beginmodule(tolua_S,"InteractionType");
   tolua_constant(tolua_S,"Quest",InteractionType::Quest);
   tolua_constant(tolua_S,"Shop",InteractionType::Shop);
   tolua_constant(tolua_S,"Zone",InteractionType::Zone);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"InteractionPoint","InteractionPoint","",NULL);
  tolua_beginmodule(tolua_S,"InteractionPoint");
   tolua_function(tolua_S,"setPosition",tolua_LuaInterface_InteractionPoint_setPosition00);
   tolua_function(tolua_S,"setInteractionType",tolua_LuaInterface_InteractionPoint_setInteractionType00);
   tolua_function(tolua_S,"setBackgroundTexture",tolua_LuaInterface_InteractionPoint_setBackgroundTexture00);
   tolua_function(tolua_S,"setInteractionCode",tolua_LuaInterface_InteractionPoint_setInteractionCode00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"InteractionRegion","InteractionRegion","",NULL);
  tolua_beginmodule(tolua_S,"InteractionRegion");
   tolua_function(tolua_S,"setPosition",tolua_LuaInterface_InteractionRegion_setPosition00);
   tolua_function(tolua_S,"setOnEnterText",tolua_LuaInterface_InteractionRegion_setOnEnterText00);
   tolua_function(tolua_S,"setOnLeaveText",tolua_LuaInterface_InteractionRegion_setOnLeaveText00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CallIndirection","CallIndirection","",NULL);
  tolua_beginmodule(tolua_S,"CallIndirection");
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"LuaCallIndirection","LuaCallIndirection","CallIndirection",NULL);
  tolua_beginmodule(tolua_S,"LuaCallIndirection");
   tolua_function(tolua_S,"setExecuteText",tolua_LuaInterface_LuaCallIndirection_setExecuteText00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CNPC","CNPC","CCharacter",NULL);
  tolua_beginmodule(tolua_S,"CNPC");
   tolua_function(tolua_S,"addOnDieEventHandler",tolua_LuaInterface_CNPC_addOnDieEventHandler00);
   tolua_function(tolua_S,"setAttitude",tolua_LuaInterface_CNPC_setAttitude00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Player","Player","CCharacter",NULL);
  tolua_beginmodule(tolua_S,"Player");
   tolua_function(tolua_S,"getSaveText",tolua_LuaInterface_Player_getSaveText00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"TextWindow","TextWindow","",NULL);
  tolua_beginmodule(tolua_S,"TextWindow");
   tolua_function(tolua_S,"setText",tolua_LuaInterface_TextWindow_setText00);
   tolua_function(tolua_S,"setAutocloseTime",tolua_LuaInterface_TextWindow_setAutocloseTime00);
   tolua_function(tolua_S,"setPosition",tolua_LuaInterface_TextWindow_setPosition00);
   tolua_function(tolua_S,"center",tolua_LuaInterface_TextWindow_center00);
   tolua_function(tolua_S,"setOnCloseText",tolua_LuaInterface_TextWindow_setOnCloseText00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Shop","Shop","",NULL);
  tolua_beginmodule(tolua_S,"Shop");
   tolua_function(tolua_S,"toggle",tolua_LuaInterface_Shop_toggle00);
   tolua_function(tolua_S,"addItem",tolua_LuaInterface_Shop_addItem00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CSpellActionBase","CSpellActionBase","",NULL);
  tolua_beginmodule(tolua_S,"CSpellActionBase");
   tolua_function(tolua_S,"addAdditionalSpellOnTarget",tolua_LuaInterface_CSpellActionBase_addAdditionalSpellOnTarget00);
   tolua_function(tolua_S,"addAdditionalSpellOnCreator",tolua_LuaInterface_CSpellActionBase_addAdditionalSpellOnCreator00);
   tolua_function(tolua_S,"setRequiredClass",tolua_LuaInterface_CSpellActionBase_setRequiredClass00);
   tolua_function(tolua_S,"setRequiredLevel",tolua_LuaInterface_CSpellActionBase_setRequiredLevel00);
   tolua_function(tolua_S,"addRequiredWeapon",tolua_LuaInterface_CSpellActionBase_addRequiredWeapon00);
   tolua_function(tolua_S,"setSoundSpellCasting",tolua_LuaInterface_CSpellActionBase_setSoundSpellCasting00);
   tolua_function(tolua_S,"setSoundSpellStart",tolua_LuaInterface_CSpellActionBase_setSoundSpellStart00);
   tolua_function(tolua_S,"setSoundSpellHit",tolua_LuaInterface_CSpellActionBase_setSoundSpellHit00);
   tolua_function(tolua_S,"setRank",tolua_LuaInterface_CSpellActionBase_setRank00);
   tolua_function(tolua_S,"setInstant",tolua_LuaInterface_CSpellActionBase_setInstant00);
   tolua_function(tolua_S,"setCharacterState",tolua_LuaInterface_CSpellActionBase_setCharacterState00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CAction","CAction","CSpellActionBase",NULL);
  tolua_beginmodule(tolua_S,"CAction");
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CSpell","CSpell","CSpellActionBase",NULL);
  tolua_beginmodule(tolua_S,"CSpell");
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ConfigurableSpell","ConfigurableSpell","CSpell",NULL);
  tolua_beginmodule(tolua_S,"ConfigurableSpell");
   tolua_function(tolua_S,"setCastTime",tolua_LuaInterface_ConfigurableSpell_setCastTime00);
   tolua_function(tolua_S,"setCooldown",tolua_LuaInterface_ConfigurableSpell_setCooldown00);
   tolua_function(tolua_S,"setSpellCost",tolua_LuaInterface_ConfigurableSpell_setSpellCost00);
   tolua_function(tolua_S,"setName",tolua_LuaInterface_ConfigurableSpell_setName00);
   tolua_function(tolua_S,"setInfo",tolua_LuaInterface_ConfigurableSpell_setInfo00);
   tolua_function(tolua_S,"setRange",tolua_LuaInterface_ConfigurableSpell_setRange00);
   tolua_function(tolua_S,"setSpellSymbol",tolua_LuaInterface_ConfigurableSpell_setSpellSymbol00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ConfigurableAction","ConfigurableAction","CAction",NULL);
  tolua_beginmodule(tolua_S,"ConfigurableAction");
   tolua_function(tolua_S,"setCastTime",tolua_LuaInterface_ConfigurableAction_setCastTime00);
   tolua_function(tolua_S,"setCooldown",tolua_LuaInterface_ConfigurableAction_setCooldown00);
   tolua_function(tolua_S,"setSpellCost",tolua_LuaInterface_ConfigurableAction_setSpellCost00);
   tolua_function(tolua_S,"setName",tolua_LuaInterface_ConfigurableAction_setName00);
   tolua_function(tolua_S,"setInfo",tolua_LuaInterface_ConfigurableAction_setInfo00);
   tolua_function(tolua_S,"setRange",tolua_LuaInterface_ConfigurableAction_setRange00);
   tolua_function(tolua_S,"setSpellSymbol",tolua_LuaInterface_ConfigurableAction_setSpellSymbol00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"GeneralDamageSpell","GeneralDamageSpell","ConfigurableSpell",NULL);
  tolua_beginmodule(tolua_S,"GeneralDamageSpell");
   tolua_function(tolua_S,"setDirectDamage",tolua_LuaInterface_GeneralDamageSpell_setDirectDamage00);
   tolua_function(tolua_S,"setContinuousDamage",tolua_LuaInterface_GeneralDamageSpell_setContinuousDamage00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"GeneralRayDamageSpell","GeneralRayDamageSpell","GeneralDamageSpell",NULL);
  tolua_beginmodule(tolua_S,"GeneralRayDamageSpell");
   tolua_function(tolua_S,"setNumAnimations",tolua_LuaInterface_GeneralRayDamageSpell_setNumAnimations00);
   tolua_function(tolua_S,"setAnimationTexture",tolua_LuaInterface_GeneralRayDamageSpell_setAnimationTexture00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"GeneralAreaDamageSpell","GeneralAreaDamageSpell","GeneralDamageSpell",NULL);
  tolua_beginmodule(tolua_S,"GeneralAreaDamageSpell");
   tolua_function(tolua_S,"setNumAnimations",tolua_LuaInterface_GeneralAreaDamageSpell_setNumAnimations00);
   tolua_function(tolua_S,"setAnimationTexture",tolua_LuaInterface_GeneralAreaDamageSpell_setAnimationTexture00);
   tolua_function(tolua_S,"setRadius",tolua_LuaInterface_GeneralAreaDamageSpell_setRadius00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"GeneralBoltDamageSpell","GeneralBoltDamageSpell","GeneralDamageSpell",NULL);
  tolua_beginmodule(tolua_S,"GeneralBoltDamageSpell");
   tolua_function(tolua_S,"setMoveSpeed",tolua_LuaInterface_GeneralBoltDamageSpell_setMoveSpeed00);
   tolua_function(tolua_S,"setExpireTime",tolua_LuaInterface_GeneralBoltDamageSpell_setExpireTime00);
   tolua_function(tolua_S,"setNumAnimations",tolua_LuaInterface_GeneralBoltDamageSpell_setNumAnimations00);
   tolua_function(tolua_S,"setAnimationTexture",tolua_LuaInterface_GeneralBoltDamageSpell_setAnimationTexture00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"GeneralHealingSpell","GeneralHealingSpell","ConfigurableSpell",NULL);
  tolua_beginmodule(tolua_S,"GeneralHealingSpell");
   tolua_function(tolua_S,"setEffectType",tolua_LuaInterface_GeneralHealingSpell_setEffectType00);
   tolua_function(tolua_S,"setDirectHealing",tolua_LuaInterface_GeneralHealingSpell_setDirectHealing00);
   tolua_function(tolua_S,"setContinuousHealing",tolua_LuaInterface_GeneralHealingSpell_setContinuousHealing00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"GeneralBuffSpell","GeneralBuffSpell","ConfigurableSpell",NULL);
  tolua_beginmodule(tolua_S,"GeneralBuffSpell");
   tolua_function(tolua_S,"setEffectType",tolua_LuaInterface_GeneralBuffSpell_setEffectType00);
   tolua_function(tolua_S,"setDuration",tolua_LuaInterface_GeneralBuffSpell_setDuration00);
   tolua_function(tolua_S,"setStats",tolua_LuaInterface_GeneralBuffSpell_setStats00);
   tolua_function(tolua_S,"setResistElementModifierPoints",tolua_LuaInterface_GeneralBuffSpell_setResistElementModifierPoints00);
   tolua_function(tolua_S,"setSpellEffectElementModifierPoints",tolua_LuaInterface_GeneralBuffSpell_setSpellEffectElementModifierPoints00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"MeleeDamageAction","MeleeDamageAction","ConfigurableAction",NULL);
  tolua_beginmodule(tolua_S,"MeleeDamageAction");
   tolua_function(tolua_S,"setDamageBonus",tolua_LuaInterface_MeleeDamageAction_setDamageBonus00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"RangedDamageAction","RangedDamageAction","ConfigurableAction",NULL);
  tolua_beginmodule(tolua_S,"RangedDamageAction");
   tolua_function(tolua_S,"setDamageBonus",tolua_LuaInterface_RangedDamageAction_setDamageBonus00);
   tolua_function(tolua_S,"setMoveSpeed",tolua_LuaInterface_RangedDamageAction_setMoveSpeed00);
   tolua_function(tolua_S,"setExpireTime",tolua_LuaInterface_RangedDamageAction_setExpireTime00);
   tolua_function(tolua_S,"setNumAnimations",tolua_LuaInterface_RangedDamageAction_setNumAnimations00);
   tolua_function(tolua_S,"setAnimationTexture",tolua_LuaInterface_RangedDamageAction_setAnimationTexture00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Quest","Quest","",NULL);
  tolua_beginmodule(tolua_S,"Quest");
   tolua_function(tolua_S,"addRequiredItemForCompletion",tolua_LuaInterface_Quest_addRequiredItemForCompletion00);
   tolua_function(tolua_S,"setDescription",tolua_LuaInterface_Quest_setDescription00);
   tolua_function(tolua_S,"setExperienceReward",tolua_LuaInterface_Quest_setExperienceReward00);
   tolua_function(tolua_S,"setCoinReward",tolua_LuaInterface_Quest_setCoinReward00);
   tolua_function(tolua_S,"setItemReward",tolua_LuaInterface_Quest_setItemReward00);
   tolua_function(tolua_S,"finishQuest",tolua_LuaInterface_Quest_finishQuest00);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"DawnInterface",0);
  tolua_beginmodule(tolua_S,"DawnInterface");
   tolua_function(tolua_S,"createNewMobType",tolua_LuaInterface_DawnInterface_createNewMobType00);
   tolua_function(tolua_S,"createNewItem",tolua_LuaInterface_DawnInterface_createNewItem00);
   tolua_function(tolua_S,"giveItemToPlayer",tolua_LuaInterface_DawnInterface_giveItemToPlayer00);
   tolua_function(tolua_S,"giveExpToPlayer",tolua_LuaInterface_DawnInterface_giveExpToPlayer00);
   tolua_function(tolua_S,"addMobSpawnPoint",tolua_LuaInterface_DawnInterface_addMobSpawnPoint00);
   tolua_function(tolua_S,"removeMobSpawnPoint",tolua_LuaInterface_DawnInterface_removeMobSpawnPoint00);
   tolua_function(tolua_S,"createGeneralRayDamageSpell",tolua_LuaInterface_DawnInterface_createGeneralRayDamageSpell00);
   tolua_function(tolua_S,"createGeneralAreaDamageSpell",tolua_LuaInterface_DawnInterface_createGeneralAreaDamageSpell00);
   tolua_function(tolua_S,"createGeneralBoltDamageSpell",tolua_LuaInterface_DawnInterface_createGeneralBoltDamageSpell00);
   tolua_function(tolua_S,"createGeneralHealingSpell",tolua_LuaInterface_DawnInterface_createGeneralHealingSpell00);
   tolua_function(tolua_S,"createGeneralBuffSpell",tolua_LuaInterface_DawnInterface_createGeneralBuffSpell00);
   tolua_function(tolua_S,"createMeleeDamageAction",tolua_LuaInterface_DawnInterface_createMeleeDamageAction00);
   tolua_function(tolua_S,"createRangedDamageAction",tolua_LuaInterface_DawnInterface_createRangedDamageAction00);
   tolua_function(tolua_S,"copySpell",tolua_LuaInterface_DawnInterface_copySpell00);
   tolua_function(tolua_S,"copySpell",tolua_LuaInterface_DawnInterface_copySpell01);
   tolua_function(tolua_S,"copySpell",tolua_LuaInterface_DawnInterface_copySpell02);
   tolua_function(tolua_S,"copySpell",tolua_LuaInterface_DawnInterface_copySpell03);
   tolua_function(tolua_S,"copySpell",tolua_LuaInterface_DawnInterface_copySpell04);
   tolua_function(tolua_S,"copySpell",tolua_LuaInterface_DawnInterface_copySpell05);
   tolua_function(tolua_S,"copySpell",tolua_LuaInterface_DawnInterface_copySpell06);
   tolua_function(tolua_S,"inscribeSpellInPlayerSpellbook",tolua_LuaInterface_DawnInterface_inscribeSpellInPlayerSpellbook00);
   tolua_function(tolua_S,"addInteractionPoint",tolua_LuaInterface_DawnInterface_addInteractionPoint00);
   tolua_function(tolua_S,"addCharacterInteractionPoint",tolua_LuaInterface_DawnInterface_addCharacterInteractionPoint00);
   tolua_function(tolua_S,"addInteractionRegion",tolua_LuaInterface_DawnInterface_addInteractionRegion00);
   tolua_function(tolua_S,"createTextWindow",tolua_LuaInterface_DawnInterface_createTextWindow00);
   tolua_function(tolua_S,"removeInteractionPoint",tolua_LuaInterface_DawnInterface_removeInteractionPoint00);
   tolua_function(tolua_S,"removeInteractionRegion",tolua_LuaInterface_DawnInterface_removeInteractionRegion00);
   tolua_function(tolua_S,"createEventHandler",tolua_LuaInterface_DawnInterface_createEventHandler00);
   tolua_function(tolua_S,"addQuest",tolua_LuaInterface_DawnInterface_addQuest00);
   tolua_function(tolua_S,"addShop",tolua_LuaInterface_DawnInterface_addShop00);
   tolua_function(tolua_S,"enterZone",tolua_LuaInterface_DawnInterface_enterZone00);
   tolua_function(tolua_S,"isSavingAllowed",tolua_LuaInterface_DawnInterface_isSavingAllowed00);
   tolua_function(tolua_S,"setSavingAllowed",tolua_LuaInterface_DawnInterface_setSavingAllowed00);
   tolua_function(tolua_S,"setBackgroundMusic",tolua_LuaInterface_DawnInterface_setBackgroundMusic00);
   tolua_function(tolua_S,"getPlayer",tolua_LuaInterface_DawnInterface_getPlayer00);
   tolua_function(tolua_S,"getInventorySaveText",tolua_LuaInterface_DawnInterface_getInventorySaveText00);
   tolua_function(tolua_S,"getSpellbookSaveText",tolua_LuaInterface_DawnInterface_getSpellbookSaveText00);
   tolua_function(tolua_S,"restoreItemInBackpack",tolua_LuaInterface_DawnInterface_restoreItemInBackpack00);
   tolua_function(tolua_S,"restoreWieldItem",tolua_LuaInterface_DawnInterface_restoreWieldItem00);
   tolua_function(tolua_S,"restoreGroundLootItem",tolua_LuaInterface_DawnInterface_restoreGroundLootItem00);
   tolua_function(tolua_S,"restoreGroundGold",tolua_LuaInterface_DawnInterface_restoreGroundGold00);
   tolua_function(tolua_S,"setCurrentZone",tolua_LuaInterface_DawnInterface_setCurrentZone00);
   tolua_function(tolua_S,"getAllZonesSaveText",tolua_LuaInterface_DawnInterface_getAllZonesSaveText00);
   tolua_function(tolua_S,"getReenterCurrentZoneText",tolua_LuaInterface_DawnInterface_getReenterCurrentZoneText00);
   tolua_function(tolua_S,"getItemReferenceRestore",tolua_LuaInterface_DawnInterface_getItemReferenceRestore00);
   tolua_function(tolua_S,"getItemReferenceRestore",tolua_LuaInterface_DawnInterface_getItemReferenceRestore01);
   tolua_function(tolua_S,"getItemReferenceRestore",tolua_LuaInterface_DawnInterface_getItemReferenceRestore02);
   tolua_function(tolua_S,"getItemReferenceRestore",tolua_LuaInterface_DawnInterface_getItemReferenceRestore03);
   tolua_function(tolua_S,"getItemReferenceRestore",tolua_LuaInterface_DawnInterface_getItemReferenceRestore04);
   tolua_function(tolua_S,"getItemReferenceRestore",tolua_LuaInterface_DawnInterface_getItemReferenceRestore05);
   tolua_function(tolua_S,"getItemReferenceRestore",tolua_LuaInterface_DawnInterface_getItemReferenceRestore06);
   tolua_function(tolua_S,"getReinitialisationString",tolua_LuaInterface_DawnInterface_getReinitialisationString00);
   tolua_function(tolua_S,"getReinitialisationString",tolua_LuaInterface_DawnInterface_getReinitialisationString01);
   tolua_function(tolua_S,"restoreCharacterReference",tolua_LuaInterface_DawnInterface_restoreCharacterReference00);
   tolua_function(tolua_S,"restoreInteractionPointReference",tolua_LuaInterface_DawnInterface_restoreInteractionPointReference00);
   tolua_function(tolua_S,"restoreInteractionRegionReference",tolua_LuaInterface_DawnInterface_restoreInteractionRegionReference00);
   tolua_function(tolua_S,"restoreEventHandlerReference",tolua_LuaInterface_DawnInterface_restoreEventHandlerReference00);
   tolua_function(tolua_S,"getActionbarSaveText",tolua_LuaInterface_DawnInterface_getActionbarSaveText00);
   tolua_function(tolua_S,"restoreActionBar",tolua_LuaInterface_DawnInterface_restoreActionBar00);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"TileClassificationType",0);
  tolua_beginmodule(tolua_S,"TileClassificationType");
   tolua_constant(tolua_S,"FLOOR",TileClassificationType::FLOOR);
   tolua_constant(tolua_S,"ENVIRONMENT",TileClassificationType::ENVIRONMENT);
   tolua_constant(tolua_S,"SHADOW",TileClassificationType::SHADOW);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"AdjacencyType",0);
  tolua_beginmodule(tolua_S,"AdjacencyType");
   tolua_constant(tolua_S,"RIGHT",AdjacencyType::RIGHT);
   tolua_constant(tolua_S,"LEFT",AdjacencyType::LEFT);
   tolua_constant(tolua_S,"TOP",AdjacencyType::TOP);
   tolua_constant(tolua_S,"BOTTOM",AdjacencyType::BOTTOM);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"AdjacencyEquivalenceClass","AdjacencyEquivalenceClass","",NULL);
  tolua_beginmodule(tolua_S,"AdjacencyEquivalenceClass");
   tolua_function(tolua_S,"addEquivalentTile",tolua_LuaInterface_AdjacencyEquivalenceClass_addEquivalentTile00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"TileSet","TileSet","",NULL);
  tolua_beginmodule(tolua_S,"TileSet");
   tolua_function(tolua_S,"addTile",tolua_LuaInterface_TileSet_addTile00);
   tolua_function(tolua_S,"addTileWithCollisionBox",tolua_LuaInterface_TileSet_addTileWithCollisionBox00);
   tolua_function(tolua_S,"addAdjacency",tolua_LuaInterface_TileSet_addAdjacency00);
   tolua_function(tolua_S,"createAdjacencyEquivalenceClass",tolua_LuaInterface_TileSet_createAdjacencyEquivalenceClass00);
   tolua_function(tolua_S,"addEquivalenceAdjacency",tolua_LuaInterface_TileSet_addEquivalenceAdjacency00);
   tolua_function(tolua_S,"printTileSet",tolua_LuaInterface_TileSet_printTileSet00);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"EditorInterface",0);
  tolua_beginmodule(tolua_S,"EditorInterface");
   tolua_function(tolua_S,"getTileSet",tolua_LuaInterface_EditorInterface_getTileSet00);
   tolua_function(tolua_S,"addGroundTile",tolua_LuaInterface_EditorInterface_addGroundTile00);
   tolua_function(tolua_S,"addEnvironment",tolua_LuaInterface_EditorInterface_addEnvironment00);
   tolua_function(tolua_S,"adjustLastRGBA",tolua_LuaInterface_EditorInterface_adjustLastRGBA00);
   tolua_function(tolua_S,"adjustLastScale",tolua_LuaInterface_EditorInterface_adjustLastScale00);
   tolua_function(tolua_S,"addCollisionRect",tolua_LuaInterface_EditorInterface_addCollisionRect00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_LuaInterface (lua_State* tolua_S) {
 return tolua_LuaInterface_open(tolua_S);
};
#endif

