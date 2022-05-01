#pragma once

// Disable warnings for steam_api
#pragma warning(disable:4996)

#define LUA_BUILD_AS_DLL
#include "Lua/lua.hpp"
#include "Steam/steam_api.h"
#include "LZ4/lz4.h"
#include "MyGUI/MyGUI.h"
#include "SM/SM.h"

#pragma comment(lib, "lib/lua51.lib")
#pragma comment(lib, "lib/MyGUIEngine.lib")