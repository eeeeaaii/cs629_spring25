#pragma once
#include "configfile/scenedata.h"
#include "intersection.h"
#include "shape.h"

class Sphere : public Shape {
public:
    SphereData* sphere_data;

    Sphere(SphereData* sdata);
    Intersection* intersect(Vect origin, Vect ray) override;
};