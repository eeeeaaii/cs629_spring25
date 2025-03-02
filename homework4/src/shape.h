#pragma once
#include "intersection.h"
#include "vect/vect.h"

class Shape {
public:
    virtual Intersection* intersect(Vect origin, Vect ray) { return nullptr; }
};