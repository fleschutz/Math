// SI/Sun.hpp - contains physical characteristics of the Sun
#pragma once
#include "types.hpp"
#define CONST(_name, _value, _unit)  static constexpr auto _name = _unit(_value)

namespace si
{
	namespace Sun
	{
CONST( equatorial_radius, 695'700, kilometer);
		const auto equatorial_rotation_velocity = meters_per_second(1997);
		const auto equatorial_surface_gravity = meters_per_second2(274);
		const auto surface_area = meter2(6.09e12);
		const auto diameter = kilometer(1390176);
		const auto radius = diameter / 2.0;
		const auto mass = kilogram(1.9884e33);
		const auto mean_distance_from_Earh = kilometer(1.496e8);
		const double flattening = 0.00005;
		// const auto average_density = 1.408 g/cm³;
		// const auto age = 4.6 billion years;
		const auto center_temperature = kelvin(15700000);
		const auto photosphere_temperature = kelvin(5772);
		const auto corona_temperature = kelvin(5000000);
		const quantity human_population = 0; // as of 2025
	}
}

#undef CONST
