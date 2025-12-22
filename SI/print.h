// SI/print.h - print strings and values to the console
#pragma once

#include <iostream>
#include "literals.h"

namespace si
{
	void print(const std::string& text)
	{
		std::cout << std::endl << text;
	}

	// The 7 SI base units:
	void print(time t)
	{
		if (abs(t) >= year(1.0))
			std::cout << year(t) << " year(s) ";
		else if (abs(t) >= week(1.0))
			std::cout << week(t) << " week(s) ";
		else if (abs(t) >= day(2.0))
			std::cout << day(t) << " day(s) ";
		else if (abs(t) >= hour(1.0))
			std::cout << (int)hour(t) << "h " << ((int)minute(t)) % 60 << "min ";
		else if (abs(t) >= 1_min)
			std::cout << (t / 1_min) << "min ";
		else if (abs(t) >= 1_sec)
			std::cout << (t / 1_sec) << "sec ";
		else if (abs(t) >= 1_ms)
			std::cout << (t / 1_ms) << "ms ";
		else
			std::cout << (t / 1_mus) << "mus ";
	}

	void print(length d)
	{
		if (abs(d) >= constant::lightyear)
			std::cout << (d / constant::lightyear) << " light-year(s) ";
		else if (abs(d) >= 1_km)
			std::cout << (d / 1_km) << "km ";
		else if (abs(d) >= 1_m)
			std::cout << (d / 1_m) << "m ";
		else if (abs(d) >= 1_cm)
			std::cout << (d / 1_cm) << "cm ";
		else
			std::cout << (d / 1_mm) << "mm ";
	}

	void print(mass m)
	{
		if (abs(m) >= 1_mt)
			std::cout << (m / 1_mt) << "mt ";
		else if (abs(m) >= 1_kt)
			std::cout << (m / 1_kt) << "kt ";
		else if (abs(m) >= 1_t)
			std::cout << (m / 1_t) << "t ";
		else if (abs(m) >= 1_kg)
			std::cout << (m / 1_kg) << "kg ";
		else if (abs(m) >= 1_g)
			std::cout << (m / 1_g) << "g ";
		else
			std::cout << (m / 1_mg) << "mg ";
	}

	void print(temperature T)
	{
		if (abs(T) >= 1_GK)
			std::cout << (T / 1_GK) << "GK ";
		else if (abs(T) >= 1_MK)
			std::cout << (T / 1_MK) << "MK ";
		else if (abs(T) >= kelvin(1.0))
			std::cout << kelvin(T) << "K ";
		else
			std::cout << (T / 1_mK) << "mK ";
	}

	// The 22 SI derived units:
	void print(area a)
	{
		if (abs(a) >= 1_km2)
			std::cout << (a / 1_km2) << "km² ";
		else if (abs(a) >= 1_m2)
			std::cout << (a / 1_m2) << "m² ";
		else if (abs(a) >= 1_cm2)
			std::cout << (a / 1_cm2) << "cm² ";
		else
			std::cout << (a / 1_mm2) << "mm² ";
	}

	void print(volume v)
	{
		if (abs(v) >= 1_km3)
			std::cout << (v / 1_km3) << "km³ ";
		else if (abs(v) >= 1_m3)
			std::cout << (v / 1_m3) << "m³ ";
		else if (abs(v) >= 1_cm3)
			std::cout << (v / 1_cm3) << "cm³ ";
		else
			std::cout << (v / 1_mm3) << "mm³ ";
	}

	void print(speed v)
	{
		std::cout << kilometers_per_hour(v) << "km/h ";
	}

	void print(acceleration a)
	{
		std::cout << meters_per_second2(a) << "m/s² ";
	}

	void print(energy E)
	{
		if (abs(E) >= 1_TJ)
			std::cout << (E / 1_TJ) << "TJ ";
		else if (abs(E) >= 1_GJ)
			std::cout << (E / 1_GJ) << "GJ ";
		else if (abs(E) >= 1_MJ)
			std::cout << (E / 1_MJ) << "MJ ";
		else if (abs(E) >= 1_kJ)
			std::cout << (E / 1_kJ) << "kJ ";
		else
			std::cout << joule(E) << "Joule ";
	}

	void print(angle a)
	{
		std::cout << degree(a) << "° ";
	}

	void print(quantity number)
	{
		std::cout << number << " ";
	}

	void print(area a, volume v, mass m)
	{
		print(a); print(v); print(m);
	}
}
