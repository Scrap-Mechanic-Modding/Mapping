#pragma once
#include <cstdint>

namespace SM
{
	// TODO: Document vtable stuffs
	class PaintToolNetworkData
	{
	private:
		bool bool8;
		uint32_t dwordC;
		uint32_t m_color;
		uint32_t dword14;
		char char18;
		uint8_t gap19[55];
		uint64_t qword50;
	private:
		virtual void func0();
	};

	static_assert(sizeof(ClientTool) == 0x545, "ClientTool wrong size");
}