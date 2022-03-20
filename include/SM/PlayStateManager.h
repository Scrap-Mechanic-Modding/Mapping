#pragma once
#include <cstdint>

namespace SM
{
	class PlayState;
	
	// TODO: Document vtable stuffs
	class PlayStateManager
	{
	private:
	  uint64_t qword8;
	  uint64_t qword10;
	  uint64_t qword18;
	public:
	  PlayState* m_pPlayState;
	private:
	  uint64_t m_pPlayStateRefCount;
	private:
		virtual void func0();
	};

	static_assert(sizeof(PlayStateManager) == 0x30, "PlayStateManager wrong size");
}
