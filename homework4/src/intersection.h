#pragma once
#include "configfile/scenedata.h"
#include "vect/vect.h"

// This encapsulates an intersection of a viewing ray with
// a surface.

struct Intersection {
    Vect point;
    Vect normal;
    float t;
    Material* material;
};
