#pragma once
#include <vulkan/vulkan.h>
#include <string>

class Texture
{
public:
	uint32_t mipLevels;
	VkImage image;
	VkImageView imageView;
	VkDeviceMemory imageMemory;
	VkSampler sampler;

	void CreateImage(uint32_t width, uint32_t height, VkFormat format, VkImageTiling tiling, VkImageUsageFlags usage, VkMemoryPropertyFlags properties);
	VkImageView CreateImageView(VkFormat format, VkImageAspectFlags aspectFlags);
	void CreateTextureSampler();
	void CreateTextureImageView();
	void CreateTextureImage(std::string texturePath);

	void DestroyTexture();
	//void GenerateMipmaps(VkImage image, VkFormat format, int32_t texWidth, int32_t texHeight, uint32_t mipLevels);
};