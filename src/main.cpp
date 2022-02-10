#include "TBTK/BrillouinZone.h"
#include "TBTK/Model.h"
#include "TBTK/Property/DOS.h"
#include "TBTK/PropertyExtractor/BlockDiagonalizer.h"
#include "TBTK/Range.h"
#include "TBTK/Smooth.h"
#include "TBTK/Solver/BlockDiagonalizer.h"
#include "TBTK/Streams.h"
#include "TBTK/TBTK.h"
#include "TBTK/UnitHandler.h"
#include "TBTK/Vector3d.h"
// #include "TBTK/Visualization/MatPlotLib/Plotter.h"

#include "Parameters.h"
#include "UnitCell.h"

using namespace std;
using namespace TBTK;
// using namespace Visualization::MatPlotLib;

int
main(int argc, char **argv)
{
	// Initialize TBTK.
	Initialize();
	
	UnitHandler::setScales(
		{"1 rad", "1 C", "1 pcs", "1 eV", "1 Ao", "1 K", "1 s"}
	);

	// Parameters parameters;
	// UnitCell unitCell;

	// Vector3d r[3];
	// r[0] = unitCell.unitCellBasis[0];
	// r[1] = unitCell.unitCellBasis[1];
	// r[2] = unitCell.unitCellBasis[2];

	// Vector3d r_AB[3];
	// r_AB[0] = (r[0] + 2*r[1])/3.;
	// r_AB[1] = -r[1] + r_AB[0];
	// r_AB[2] = -r[0] - r[1] + r_AB[0];

	

	return 0;
}
