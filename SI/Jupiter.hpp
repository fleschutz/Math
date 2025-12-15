// SI/Jupiter.hpp - contains physical characteristics of planet Jupiter
#pragma once
#include "types.hpp"
#define CONST(_name, _value, _unit)  static constexpr auto _name = _unit(_value)

namespace si
{
	namespace Jupiter
	{
CONST( diameter,         152800,       kilometer);
CONST( radius,           diameter / 2, meter);
CONST( human_population, 0,            quantity); // as of 2025
	}
}

#undef CONST
