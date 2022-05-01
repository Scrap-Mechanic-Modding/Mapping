#pragma once
#include <cstdint>
#include <string>

namespace SM
{
	
	// TODO: Document vtable stuffs
	class IToolImpl
	{
	private:
		char char8;
		uint8_t gap9[7];
		uint64_t qword10;
		uint64_t qword18;
		uint8_t gap20[40];
		char char48;
		uint8_t gap49[15];
		uint64_t qword58;
		uint64_t qword60;
		uint8_t gap68[32];
		std::string string88;
		std::string stringA8;
		std::string stringC8;
		std::string stringE8;
		std::string string108;
		std::string string128;
		std::string string148;
		std::string string168;
		std::string string188;
		std::string string1A8;
		std::string string1C8;
		std::string string1E8;
		std::string string208;
		std::string string228;
		std::string string248;
		std::string string268;
		uint32_t dword288;
	private:
		virtual void func0();
	};

	static_assert(sizeof(IToolImpl) == 0x290, "IToolImpl wrong size");
}
