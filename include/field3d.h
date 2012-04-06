#ifndef FIELD3D
#define FIELD3D

#include <string>
#include "grid.h"

class cfield3d
{
  public:
    // functions
    cfield3d(cgrid *, double *, std::string);
    ~cfield3d();
    int boundary_bottop(int);
    int boundary_cyclic();
    int save(int);
    int load(int);

    // variables
    double *data;
    std::string name;

  private:
    cgrid *grid;
};
#endif

