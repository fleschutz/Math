// SI/Mercury.hpp - contains data of planet Mercury
#pragma once
#include "types.hpp"
#define CONST(_name, _value, _unit)  static constexpr auto _name = _unit(_value)

namespace si
{
	namespace Mercury
	{
CONST( gravity,            3.7, meters_per_second2); // surface gravity
CONST( human_population,     0, quantity); // as of 2025
	}
}

#undef CONST
