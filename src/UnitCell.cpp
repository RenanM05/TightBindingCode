#include "UnitCell.h"

// Constructor 
UnitCell::UnitCell():
 unitCellBasis({
    {+parameters.a,	0, 0},
    {-parameters.a/2, parameters.a*sqrt(3)/2, 0},
    {0,	0, parameters.a}})
{
};

