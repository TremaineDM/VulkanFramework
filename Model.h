#pragma once
#include <vector>
#include "Vertex.h"
#include "Texture.h"

class Model
{
public:
	std::vector<Vertex> vertices;
	std::vector<uint32_t> indices;
	Texture texture;

	void LoadModel(std::string modelPath);
};

