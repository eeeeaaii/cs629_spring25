#pragma once

#include "renderer/renderer_types.h"
#include "vect/vect.h"

// defined for you
void drawAntiAliasedLineBoxFilter(Frame* frame, Vect p0, Vect p1);
void drawAntiAliasedLineWASFilter(Frame* frame, Vect p0, Vect p1);
void drawMidpointLine(Frame* frame, Vect p0, Vect p1);
