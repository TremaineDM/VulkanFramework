#define NOMINMAX
#include <iostream>
#include <stdexcept>
#include <cstdlib>

#include "GameManager.h"

int main()
{
	GameManager game;

	system("cmd.exe /c C:\\Users\\light\\Desktop\\CODING_PROGRAMMING\\Humber_Projects\\C++\\VulkanFramework\\shaders\\shaderCompile.bat");

	try
	{
		game.Run();
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
