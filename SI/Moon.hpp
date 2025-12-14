// SI/Moon.hpp - contains physical characteristics of the Moon
#pragma once

#include "types.hpp"

namespace si
{
	namespace Moon
	{
		const auto diameter = kilometer(3476);
		const auto gravity = meters_per_second2(1.628);
		const quantity human_population = 0; // as of 2025
	}
}
