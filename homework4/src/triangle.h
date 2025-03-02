#pragma once
#include "configfile/scenedata.h"
#include "intersection.h"
#include "shape.h"

class Triangle : public Shape {
public:
    TriangleData* triangle_data;

    Triangle(TriangleData* tdata);
    Intersection* intersect(Vect origin, Vect ray) override;
};