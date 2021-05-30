////////////////////////////////////////////////////////////////////////////
//	Module 		: pch_script.h
//	Created 	: 23.05.2007
//  Modified 	: 10.08.2007
//	Author		: Dmitriy Iassenev
//	Description : precompiled header for lua and luabind users
////////////////////////////////////////////////////////////////////////////

#ifndef PCH_SCRIPT_H
#define PCH_SCRIPT_H

#include "stdafx.h"

// AVO: lua re-org
#include "lua.hpp"
/*extern "C" {
        #include <lua/lauxlib.h>
        #include <lua/lua.h>
        #include <lua/lualib.h>
}*/
//-AVO

#pragma warning(push)
#pragma warning(disable : 4995)
#include <luabind/luabind.hpp>
#pragma warning(pop)

#include <luabind/adopt_policy.hpp>
#include <luabind/functor.hpp>
#include <luabind/iterator_policy.hpp>
#include <luabind/object.hpp>
#include <luabind/operator.hpp>
#include <luabind/out_value_policy.hpp>
#include <luabind/return_reference_to_policy.hpp>

#endif // PCH_SCRIPT_H