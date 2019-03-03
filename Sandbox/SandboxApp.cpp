#include <RadEngine.h>

// by addition $(SolutionDir)RadEngine\src to the include directory
// we can also include it like this:
//#include "RadEngine.h"

// I have no idea why RadEngine::Application has to be public here
class Sandbox : public RadEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

// Engine itself creates an entry point we just need to provide him our sandbox
RadEngine::Application* RadEngine::CreateApplication()
{
	return new Sandbox();
}