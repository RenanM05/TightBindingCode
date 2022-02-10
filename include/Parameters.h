#ifndef UPPSALA_RENAN_TIGHT_BINDING_PROJECT_PARAMETERS
#define UPPSALA_RENAN_TIGHT_BINDING_PROJECT_PARAMETERS

class Parameters{
public:
    Parameters();

	double t; //eV
	double a; //Angstrom

	const int K_POINTS_PER_PATH;
	const double ENERGY_LOWER_BOUND;
	const double ENERGY_UPPER_BOUND;
	const int ENERGY_RESOLUTION;

};


#endif