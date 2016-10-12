#pragma once

#include <math/vector.h>

namespace PGA
{
	namespace Rendering
	{
#pragma pack(4)
		struct DLight
		{
			math::float4 color;
			math::float4 direction;

		};

		struct LightingParameters
		{
			DLight dLights;

		};
#pragma pack()

	}

}