// SI/Moon.hpp - contains data of the Moon
#pragma once
#include "types.hpp"
#define CONST(_name, _value, _unit)  static constexpr auto _name = _unit(_value)

namespace si
{
	namespace Moon
	{
CONST( diameter,         3'476'000, meter);
CONST( radius,        diameter / 2, meter);
CONST( gravity,              1.628, meters_per_second2);
CONST( human_population,         0, quantity); // as of 2025
	}
}

#undef CONST
