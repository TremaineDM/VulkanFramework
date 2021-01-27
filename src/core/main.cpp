#define NOMINMAX
#include <iostream>
#include <stdexcept>
#include <cstdlib>

#include "GraphicsEngine.h"

int main()
{
	GraphicsEngine* game = new GraphicsEngine;

	system("cmd.exe /c C:\\Users\\light\\Desktop\\CODING_PROGRAMMING\\Humber_Projects\\C++\\VulkanFramework\\shaders\\shaderCompile.bat");

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
