#pragma once
#include <vulkan/vulkan.h>
#include <vector>

struct SwapChainDetails
{
	VkSurfaceCapabilitiesKHR capabilities;
	std::vector<VkSurfaceFormatKHR> formats;
	std::vector<VkPresentModeKHR> presentModes;
};