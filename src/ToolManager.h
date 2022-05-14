#pragma once
#include <cstdint>
#include <boost/uuid/uuid.hpp>

namespace SM
{
	class ClientTool;
	struct ToolManager_GetToolByName_Result
	{
		ClientTool* pToolImplementation;
		void* pToolRef;
	};

	// TODO: Document vtable stuffs
	class ToolManager
	{
	private:
	  uint64_t qword8;
	  uint64_t qword10;
	  uint64_t qword18;
	  uint64_t qword20;
	  uint64_t qword28;
	  uint32_t dword30;
	public:
	  std::list<ToolManager_GetToolByName_Result> vector38;
	private:
	  uint64_t qword48;
	  uint64_t qword50;
	  uint64_t qword58;
	  uint64_t qword60;
	  uint64_t qword68;
	  uint32_t dword70;
	  uint32_t dword74;
	  uint32_t dword78;
	  uint64_t qword80;
	  uint32_t dword88;
	  uint32_t dword8C;
	  uint64_t qword90;
	  uint64_t qword98;
	  uint64_t qwordA0;
	private:
		virtual void func0();
		virtual void func1();
		virtual void func2();
		virtual void func3();
		virtual void func4();
		virtual void func5();
		virtual void func6();
		virtual void func7();
		virtual void func8();
		virtual void func9();
	public:
		virtual ToolManager_GetToolByName_Result* CreateToolByUUID(ToolManager_GetToolByName_Result* result, boost::uuids::uuid uuid);
	private:
		virtual void func11();
	public:	
		// Retrieves g_contraptionToolManager
		static ToolManager* getInstancePtr()
		{
			return *reinterpret_cast<ToolManager**>(uintptr_t(GetModuleHandle(NULL)) + 0xE57E00);
		}
	};
	static_assert(sizeof(ToolManager) == 0xA8, "ToolManager wrong size");
}
