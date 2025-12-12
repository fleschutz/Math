#include <iostream>
#include "literals.hpp"
using namespace si;

static void check(bool condition)
{
	if (!condition)
		std::cout << "The condition has failed" << std::endl;
}

void checks()
{
	// Let's check the length conversion:
	check(1_m == 10_dm);
	check(1_m == 100_cm);
	check(1_m == 1000_mm);
	check(1_m == 0.001_km);
	check(1_m == 3.28084_ft);
}
