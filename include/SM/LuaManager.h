#pragma once
#include <cstdint>

namespace SM
{
	class LuaVM;
	struct ScriptState
	{
	private:
		uint64_t qword0;
		uint64_t qword8;
		uint64_t qword10;
		uint64_t qword18;
	public:
		uint32_t scriptId;
		uint32_t scriptRef;
		uint32_t scriptInstanceId;
		uint8_t scriptTypeId;
	private:
		uint8_t gap2D[5];
	public:
		bool m_bHasFault;
	};
	static_assert(sizeof(ScriptState) == 0x38, "ScriptState wrong size");

	// TODO: Document vtable stuffs
	class LuaManager
	{
		uint8_t gap8[8];
		uint64_t qword10;
		uint64_t qword18;
		uint64_t qword20;
		uint64_t qword28;
		uint64_t qword30;
		uint64_t qword38;
		uint64_t dword40;
		uint32_t dword48;
	public:
		uint32_t m_scriptId;
		uint32_t m_scriptRef;
		uint32_t m_scriptInstanceId;
		uint8_t m_scriptTypeId;
	private:
		uint8_t field_59;
	public:
		bool m_bIsServer;
	private:
		uint64_t qword60;
		uint64_t qword68;
		uint64_t qword70;
		uint64_t qword78;
		uint64_t qword80;
		bool bool88;
		uint8_t gap89[63];
		uint64_t qwordC8;
		uint64_t qwordD0;
		bool boolD8;
		uint8_t gapD9[255];
		uint32_t dword1D8;
		uint64_t qword1E0;
		uint64_t qword1E8;
		uint64_t qword1F0;
		uint64_t qword1F8;
		uint64_t qword200;
		uint64_t qword208;
		uint64_t qword210;
		uint32_t dword218;
		uint64_t qword220;
		uint64_t qword228;
		uint64_t qword230;
		uint64_t qword238;
		uint64_t qword240;
		uint64_t qword248;
		uint64_t qword250;
		uint64_t qword258;
		uint64_t qword260;
		uint64_t qword268;
	public:
		std::vector<ScriptState*> m_onFixedUpdateStates;
	private:
		uint64_t qword288;
		uint64_t qword290;
		uint64_t qword298;
		uint32_t dword2A0;
		uint64_t qword2A8;
		uint64_t qword2B0;
		uint64_t qword2B8;
		uint64_t qword2C0;
		uint64_t qword2C8;
		uint64_t qword2D0;
		uint64_t qword2D8;
		uint32_t dword2E0;
		uint8_t byte2E4;
	public:
		LuaVM* m_pLuaVM;
	private:
		uint64_t qword2F0;
	private:
		virtual void func0();

	public:
		// Retrieves g_contraptionLuaManager
		static LuaManager* getInstancePtr()
		{
			return *reinterpret_cast<LuaManager**>(uintptr_t(GetModuleHandle(NULL)) + 0xE57FF0);
		}
	};

	static_assert(sizeof(LuaManager) == 0x2F8, "LuaManager wrong size");
}
