#pragma once

#ifdef RAD_PLATFORM_WINDOWS // we are on a windows machine
	#ifdef RAD_BUILD_DLL // we are trying to build dll
		#define RADENGINE_API __declspec(dllexport) // for RadEngine this should be active
	#else
		#define RADENGINE_API __declspec(dllimport) // for Sandbox this should be active
	#endif
#else
	#error RadEngine only supports Windows!
#endif