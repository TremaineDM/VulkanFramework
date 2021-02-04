#pragma once
#include <vector>
#include "graphics/Vertex.h"
#include "graphics/Texture.h"

class Mesh
{
	std::vector<Vertex> vertices;
	std::vector<uint32_t> indices;
	std::vector<Texture> textures;
};

