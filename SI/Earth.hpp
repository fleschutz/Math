// SI/Earth.hpp - contains physical characteristics of planet Earth
#pragma once

#include "types.hpp"

namespace si
{
	namespace Earth
	{
		// General:  (source: https://en.wikipedia.org/wiki/Earth)
		const auto gravity = meters_per_second2(9.80665); // standard gravitational acceleration (G) for the surface of the Earth, defined 1901 in the third General Conference on Weights and Measures.

		const auto equatorial_radius = kilometer(6378.137); // denoted 'a'
		const auto equatorial_diameter = 2.0 * equatorial_radius;
		const auto equatorial_circumference = kilometer(40075.0167); 

		const auto polar_radius = kilometer(6356.752);      // denoted 'b'
		const auto polar_diameter = 2.0 * polar_radius;
		const auto polar_circumference = kilometer(40007.8629173);

		const auto radius = kilometer(6371);                 // (2*a+b) / 3
		const auto diameter = 2.0 * radius;

		static constexpr auto surface_area = kilometer2(510'072'000);
		static constexpr auto land_area = kilometer2(148'940'000);
		static constexpr auto water_area = kilometer2(361'132'000);

		const auto volume = kilometer3(1.08321e12);

		const auto mass = kilogram(5.9723e24);

		const auto equatorial_rotation_velocity = kilometers_per_hour(1674.4);

		const auto age = year(4.5e12);

		const quantity human_population = 8.2e9; // as of 2024

		// Mountains:  (source: https://en.wikipedia.org/wiki/List_of_highest_mountains_on_Earth, heights above MSL, sorted by height)
		const auto Mount_Everest_height = meter(8849);
		const auto K2_height            = meter(8611);
		const auto Kangchenjunga_height = meter(8586);
		const auto Lhotse_height        = meter(8516);
		const auto Makalu_height        = meter(8485);
		const auto Cho_Oyu_height       = meter(8188);
		const auto Dhaulagiri_1_height  = meter(8167);
		const auto Manaslu_height       = meter(8163);
		const auto Nanga_Parbat_height  = meter(8126);
		const auto Annapurna_1_height   = meter(8091);
		const auto Gasherbrum_1_height  = meter(8080);
		const auto Broad_Peak_height    = meter(8051);
		const auto Gasherbrum_2_height  = meter(8035);
		const auto Shishapangma_height  = meter(8027);
		const auto Gyachung_Kang_height = meter(7952);
		const auto Gasherbrum_3_height  = meter(7946);
		const auto Annapurna_2_height   = meter(7937);
		// ...
		const auto Zugspitze_height     = meter(2962);

		// Buildings: (source: https://en.wikipedia.org/wiki/List_of_tallest_buildings, sorted by height)
		const auto Burj_Khalifa_height           = meter(828);
		const auto Merdeka_height                = meter(678.9);
		const auto Shangai_Tower_height          = meter(632);
		const auto The_Clock_Towers_height       = meter(601);
		const auto Ping_An_Tower_height          = meter(599.1);
		const auto Lotte_World_Tower_height      = meter(554.5);
		const auto One_World_Trade_Center_height = meter(541.3);
		const auto Guangzhou_CTF_height          = meter(530);
		const auto Tianjin_CTF_height            = meter(530);
		const auto China_Zun_height              = meter(527.7);
		const auto Taipei_101_height             = meter(508);
		// ...
		const auto Eiffel_Tower_height           = meter(330);
		const auto Great_Wall_length             = kilometer(6430); // (approximately)

		// City distances: (source: distancecalculator.net, sorted alphabetically)
		const auto Boston_to_NewYorkCity = kilometer(306);
		const auto Berlin_to_Paris = kilometer(878.080);
		// ...
		const auto NewYorkCity_to_Boston = kilometer(306);
		const auto Paris_to_Berlin = kilometer(878.080);
	}
}
