#include "weaponusp45.h"
#include "pch_script.h"

CWeaponUSP45::CWeaponUSP45() {}

CWeaponUSP45::~CWeaponUSP45() {}

using namespace luabind;

#pragma optimize("s", on)
void CWeaponUSP45::script_register(lua_State *L) {
  module(L)[class_<CWeaponUSP45, CGameObject>("CWeaponUSP45")
                .def(constructor<>())];
}
