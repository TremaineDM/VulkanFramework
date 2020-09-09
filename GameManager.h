#pragma once
#include "GraphicsEngine.h"

class GameManager
{
public:
	void Init();
	void Update(float deltaTime);
	void Render();
	void Destroy();


private:
	GraphicsEngine graphicsEngine;


};

