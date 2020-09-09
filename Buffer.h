#pragma once
#include <vulkan/vulkan.h>

class Buffer
{
public:
	VkBuffer buffer;
	VkDeviceMemory bufferMemory;
};

