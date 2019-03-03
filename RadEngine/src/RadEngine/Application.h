#pragma once

#include "Core.h"

namespace RadEngine
{
	// in order to use this class in a sanbox we need to export it
	class __declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// should be defined in a client
	Application* CreateApplication();
}

