#pragma once
#include <cstdint>

namespace SM
{
	class IToolImpl;
	// TODO: Document vtable stuffs
	class ClientTool
	{
	private:
		IToolImpl tool_1;
		uint32_t dword294;
		IToolImpl tool_2;
		uint64_t m_pParentTool;
		uint64_t qword530;
		uint16_t word538;
		uint8_t byte53A;
		uint8_t gap53B;
		uint32_t dword53C;
		uint32_t dword540;
		uint8_t byte544;
	private:
		virtual void func0();
	};

	static_assert(sizeof(ClientTool) == 0x545, "ClientTool wrong size");
}