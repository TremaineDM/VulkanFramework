#include "Model.h"

//void Model::Init(std::string modelPath, std::string texPath)
//{
//	LoadModel(modelPath);
//	texture.CreateTextureImage(texPath);
//	texture.CreateImageView(VK_FORMAT_R8G8B8A8_SRGB, VK_IMAGE_ASPECT_COLOR_BIT);
//	texture.CreateTextureSampler();
//}
//
//void Model::LoadModel(std::string modelPath)
//{
//	tinyobj::attrib_t attrib;
//	std::vector<tinyobj::shape_t> shapes;
//	std::vector<tinyobj::material_t> materials;
//	std::string warn, err;
//
//	if (!tinyobj::LoadObj(&attrib, &shapes, &materials, &warn, &err, modelPath.c_str()))
//	{
//		throw std::runtime_error(warn + err);
//	}
//
//	std::unordered_map<Vertex, uint32_t> uniqueVertices{};
//	for (const auto& shape : shapes)
//	{
//		for (const auto& index : shape.mesh.indices)
//		{
//			Vertex vertex;
//
//			vertex.pos = {
//				attrib.vertices[3 * index.vertex_index + 0],
//				attrib.vertices[3 * index.vertex_index + 1],
//				attrib.vertices[3 * index.vertex_index + 2]
//			};
//
//			vertex.texCoord = {
//				attrib.texcoords[2 * index.texcoord_index + 0],
//				1.0f - attrib.texcoords[2 * index.texcoord_index + 1]
//			};
//
//			vertex.color = { 1.0f, 1.0f, 1.0f };
//			vertices.push_back(vertex);
//
//			if (uniqueVertices.count(vertex) == 0)
//			{
//				uniqueVertices[vertex] = static_cast<uint32_t>(vertices.size());
//				vertices.push_back(vertex);
//			}
//			indices.push_back(uniqueVertices[vertex]);
//
//		}
//	}
//}

Model::Model(const std::vector<Vertex>& vertices, const std::vector<uint32_t>& indices, const std::vector<Texture>& textures)
{
	this->vertices = vertices;
	this->indices = indices;

}
