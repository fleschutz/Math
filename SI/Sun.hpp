// SI/Sun.hpp - contains data of the Sun
#pragma once
#include "units.hpp"
#define CONST(_name, _value, _unit)  static constexpr auto _name = _unit(_value)

namespace si
{
	namespace Sun
	{
CONST( equatorial_radius,        695'700'000, meter);
CONST( equatorial_rotation_velocity,    1997, meters_per_second);
CONST( equatorial_surface_gravity,       274, meters_per_second2);
CONST( surface_area,                 6.09e12, meter2);
CONST( diameter,               1'390'176'000, meter);
CONST( radius,                  diameter / 2, meter);
CONST( mass,                       1.9884e33, kilogram);
CONST( mean_distance_from_Earh,     1.496e11, meter);
CONST( flattening,                   0.00005, quantity);
//CONST(average_density,               1.408, g/cm³);
CONST(age,                             4.6e9, year);
CONST( center_temperature,        15'700'000, kelvin);
CONST( photosphere_temperature,        5'772, kelvin);
CONST( corona_temperature,         5'000'000, kelvin);
CONST( human_population,                   0, quantity); // as of 2025
	}
}

#undef CONST
