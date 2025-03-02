#include "triangle.h"
#include "configfile/scenedata.h"
#include "intersection.h"
#include "vect/vect.h"

Triangle::Triangle(TriangleData* tdata)
    : triangle_data(tdata)
{
}

Intersection* Triangle::intersect(Vect origin, Vect ray)
{
    // implement triangle ray intersection.
}