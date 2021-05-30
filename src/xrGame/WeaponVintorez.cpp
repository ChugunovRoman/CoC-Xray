#include "weaponvintorez.h"
#include "pch_script.h"

CWeaponVintorez::CWeaponVintorez(void)
    : CWeaponMagazined(SOUND_TYPE_WEAPON_SNIPERRIFLE) {}

CWeaponVintorez::~CWeaponVintorez(void) {}

using namespace luabind;

#pragma optimize("s", on)
void CWeaponVintorez::script_register(lua_State *L) {
  module(L)[class_<CWeaponVintorez, CGameObject>("CWeaponVintorez")
                .def(constructor<>())];
}
