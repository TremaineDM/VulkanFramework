#pragma once
#include <vector>
#include "Vertex.h"
#include "Texture.h"
#include <stdexcept>

class Model
{
public:
	std::vector<Vertex> vertices;
	std::vector<uint32_t> indices;
	Texture texture;

	void Init(std::string modelPath, std::string texPath);
	void LoadModel(std::string modelPath);
};

