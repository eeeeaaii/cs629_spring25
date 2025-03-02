#pragma once

#include "configfile/scenedata.h"
#include "intersection.h"
#include "renderer/color.h"
#include "renderer/frame.h"
#include "shape.h"
#include "vect/vect.h"

std::vector<Shape*> setup_scene(RenderingInfo* _info);

// Put declarations for whatever other functions you want to add.

Color render_ray(Vect eye,
    Vect ray,
    int depth,
    std::vector<Shape*>,
    RenderingInfo* info);

Vect get_ray(int x, int y, RenderingInfo* info);

void raytrace_scene(Frame* frame, RenderingInfo* info);
