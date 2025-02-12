#pragma once

#include "renderer/renderer_types.h"
#include "vect/vect.h"

void drawMidpointBezier(Frame* frame, Vect p0, Vect p1, Vect p2, Vect p3);
void drawAntiAliasedBezier(Frame* frame, Vect p0, Vect p1, Vect p2, Vect p3);
void drawFadedBezier(Frame* frame, Vect _p0, Vect _p1, Vect _p2, Vect _p3);
