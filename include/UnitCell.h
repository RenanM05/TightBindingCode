#ifndef UPPSALA_RENAN_TIGHT_BINDING_PROJECT_UNITCELL
#define UPPSALA_RENAN_TIGHT_BINDING_PROJECT_UNITCELL

#include "Parameters.h"
#include "TBTK/Vector3d.h"
#include <vector>

class UnitCell{
public:
    UnitCell();

    std::vector<TBTK::Vector3d> unitCellBasis;

private:
    Parameters parameters;

};

#endif 