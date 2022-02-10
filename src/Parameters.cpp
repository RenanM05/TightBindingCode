#include "Parameters.h"

Parameters::Parameters() :
    t(3), //eV
	a(2.5), //Angstrom
	K_POINTS_PER_PATH(100),
	ENERGY_LOWER_BOUND(-10),
	ENERGY_UPPER_BOUND(+10),
	ENERGY_RESOLUTION(1000)
{
}