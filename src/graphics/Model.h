#pragma once
#include <vector>
#include "graphics/Vertex.h"
#include "graphics/Texture.h"
#include <stdexcept>

class Model
{
public:
	std::vector<Vertex> vertices;
	std::vector<uint32_t> indices;
	Texture texture;

	Model(const std::vector<Vertex>& vertices, const std::vector<uint32_t>& indices, const std::vector<Texture>& textures);


	void Init(std::string modelPath, std::string texPath);
	void LoadModel(std::string modelPath);
};

