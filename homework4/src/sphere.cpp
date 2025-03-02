#include "sphere.h"
#include "configfile/scenedata.h"
#include "debugger.h"
#include "vect/vect.h"

extern Debugger DEBUGGER;

Sphere::Sphere(SphereData* sdata)
    : sphere_data(sdata)
{
}

Intersection* Sphere::intersect(Vect origin, Vect ray)
{
    // implement sphere ray intersection.
}
