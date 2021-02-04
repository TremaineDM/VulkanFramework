#define NOMINMAX
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <sdl/SDL_vulkan.h>
#include "GraphicsEngine.h"

int main(int argc, char* argv[])
{
	GraphicsEngine* game = new GraphicsEngine;

	std::string path = "cmd.exe /c ";
	path = path.append(SOLUTION_DIR);
	path = path.append("\\shaders\\shaderCompile.bat");

	system(path.c_str());

	try
	{
		game->Run();
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	delete game;

	return EXIT_SUCCESS;
}
