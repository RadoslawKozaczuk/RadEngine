#pragma once
#include <stdio.h>

#ifdef RAD_PLATFORM_WINDOWS // we are on a windows machine

extern RadEngine::Application* RadEngine::CreateApplication();

// header files are not seen by the compiler. Instead, the C++ preprocessor replaces each #include statement
// with the contents of the corresponding header file prior to sending the translation unit (.cpp file)
// to the compiler

int main(int argc, char** argv)
{
	RadEngine::Log::Init();
	RAD_CORE_WARN("Initialized Log!");
	RAD_INFO("Hello");

	printf("It works!");
	auto app = RadEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif