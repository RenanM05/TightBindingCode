#include "ReciprocalSpace.h"

ReciprocalSpace::ReciprocalSpace(){};

// You just created a function to needs a parameter to be executed.
// This parameter has not been informed yet
void reciprocalSpaceVector(const std::vector<TBTK::Vector3d> unitCellBasisVectors){
    TBTK::Vector3d k[3];
    for(unsigned int n = 0; n < 3; n++){
		k[n] = 2*M_PI*unitCellBasisVectors[(n+1)%3]*unitCellBasisVectors[(n+2)%3]/(
			TBTK::Vector3d::dotProduct(unitCellBasisVectors[n], unitCellBasisVectors[(n+1)%3]*unitCellBasisVectors[(n+2)%3])
		);
	}
}