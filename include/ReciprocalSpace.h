#ifndef UPPSALA_RENAN_TIGHT_BINDING_PROJECT_RECIPROCAL_SPACE
#define UPPSALA_RENAN_TIGHT_BINDING_PROJECT_RECIPROCAL_SPACE

#include "UnitCell.h"
#include "TBTK/Vector3d.h"
#include <vector>

class ReciprocalSpace{
public:
    ReciprocalSpace();

    void reciprocalSpaceVector(const std::vector<TBTK::Vector3d> unitCellBasisVectors); 

private:
	UnitCell unitCell;
};

#endif