#pragma once

#include <memory>

#include "Core.h";
#include "spdlog\spdlog.h";

namespace RadEngine
{
	class RADENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define RAD_CORE_TRACE(...)		::RadEngine::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define RAD_CORE_INFO(...)		::RadEngine::Log::GetCoreLogger()->info(__VA_ARGS__);
#define RAD_CORE_WARN(...)		::RadEngine::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define RAD_CORE_ERROR(...)		::RadEngine::Log::GetCoreLogger()->error(__VA_ARGS__);
#define RAD_CORE_FATAL(...)		::RadEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__);

// Client log macros
#define RAD_TRACE(...)			::RadEngine::Log::GetClientLogger()->trace(__VA_ARGS__);
#define RAD_INFO(...)			::RadEngine::Log::GetClientLogger()->info(__VA_ARGS__);
#define RAD_WARN(...)			::RadEngine::Log::GetClientLogger()->warn(__VA_ARGS__);
#define RAD_ERROR(...)			::RadEngine::Log::GetClientLogger()->error(__VA_ARGS__);
#define RAD_FATAL(...)			::RadEngine::Log::GetClientLogger()->fatal(__VA_ARGS__);

// macros allow us to strip the code from the distribution build, for example:
//#define RAD_CORE_TRACE // and that's it. It will be nothing now