#pragma once

#include "InGameGuiManager.h"
#include "ChatGui.h"
#include "LuaManager.h"
#include "GameInstance.h"
#include "ToolManager.h"
#include "PaintToolNetworkData.h"
#include "PaintTool.h"
#include "ClientTool.h"
#include "IToolImpl.h"
#include "PlayStateManager.h"
#include "PlayState.h"
#include "Contraption.h"
#include "LuaVM.h"


// Simple global variables / non classes
namespace SM
{
	static bool* IsDeveloperMode()
	{
		return reinterpret_cast<bool*>(uintptr_t(GetModuleHandle(NULL)) + 0xE57D65);
	}
}

