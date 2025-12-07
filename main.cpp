#include <iostream>
#include "SI/everything.hpp"
using namespace si;

int main()
{
	// Example 1: 
	auto Marathon = 42.195_km;
	auto Kiptums_time = 2_h;
	auto average_speed = Marathon / Kiptums_time;
	std::cout << "Kiptum's average speed was " << miles_per_hour(average_speed) << " MPH." << std::endl;

	// Example 2:
	mass m = 1_kg;
	speed c = constant::speed_of_light;
	energy E = m * c*c;
	std::cout << "The potential energy of 1kg mass is: " << joule(E) << " Joule." << std::endl;

	// Example 3:
	auto H2_frequency = 1420.4057517682_MHz;
	auto H2_wavelength = formula::wavelength(constant::speed_of_light, H2_frequency);
	std::cout << "The wavelength of H2 in vacuum is " << centimeter(H2_wavelength) << " cm." << std::endl;

	// Example 4:
	height Eiffel_Tower = 330_m;
	auto free_fall_time = sqrt((2.0 * Eiffel_Tower) / constant::gravity_of_Earth);
	std::cout << "Falling from Eiffel Tower takes " << second(free_fall_time) << " sec." << std::endl;

	return 0;
}
