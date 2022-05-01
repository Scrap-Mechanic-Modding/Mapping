#pragma once
#include <cstdint>

namespace SM
{
	class PaintToolNetworkData;
	class ClientTool;
	// TODO: Document vtable stuffs
	class PaintTool
	{
		struct PaintData
		{
			uint32_t m_bodyId;
			uint32_t m_boolTrue;
			float m_faceX;
			float m_faceY;
			float m_faceZ;
			__int32 m_negativeOne;
			uint32_t zero_0;
			uint32_t zero_1;
			__int32 m_startX;
			__int32 m_startY;
			__int32 m_startZ;
			__int32 m_endX;
			__int32 m_endY;
			__int32 m_endZ;
		};

	private:
		ClientTool tool;
		uint32_t m_prevToolColor;
		uint32_t qword554;
		uint32_t qword558;
		uint32_t qword55C;
		PaintData m_paintData;
		uint64_t gap598;
		PaintData m_PaintClearData;
		uint8_t gap5C4[140];
		uint8_t byte660;
		float qword664;
		uint8_t gap668[4];
		float qword66C;
		uint8_t gap670[4];
		uint8_t gap674[76];
		float uint32_t6C0;
		uint32_t uint32_t6C4;
		uint32_t m_toolColor;
		PaintToolNetworkData *m_pNetworkData;
		uint8_t byte6D8;
		uint64_t qword6E0;
		uint64_t qword6E8;
	private:
		virtual void func0();
	};

	static_assert(sizeof(PaintTool) == 0x6F0, "PaintTool wrong size");
}
