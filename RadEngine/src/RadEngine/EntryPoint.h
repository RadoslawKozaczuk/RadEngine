#pragma once
#include <stdio.h>

#ifdef RAD_PLATFORM_WINDOWS // we are on a windows machine

extern RadEngine::Application* RadEngine::CreateApplication();

int main(int argc, char** argv)
{
	printf("It works!");
	auto app = RadEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif