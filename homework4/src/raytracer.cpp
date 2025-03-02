#include "raytracer.h"

#include "configfile/scenedata.h"
#include "debugger.h"
#include "intersection.h"
#include "renderer/color.h"
#include "renderer/frame.h"
#include "sphere.h"
#include "triangle.h"
#include "vect/vect.h"

#include <iostream>

#define LOG_XMIN 398
#define LOG_XMAX 402
#define LOG_YMIN 298
#define LOG_YMAX 302

extern Debugger DEBUGGER;

std::vector<Shape*> scene;

// Provided for you: your scene is a vector of shapes.
// There are two types of shapes: Sphere and Triangle.
std::vector<Shape*> setup_scene(RenderingInfo* info)
{
    for (auto sphere : info->spheres) {
        Sphere* obj = new Sphere(sphere);
        scene.push_back(obj);
    }
    for (auto triangle : info->triangles) {
        Triangle* tri = new Triangle(triangle);
        scene.push_back(tri);
    }
    return scene;
}

Intersection* find_closest_intersection(/* what arguments would you need? */)
{
    // Suggested function (you don't have to structure
    // your code in a specific way, this is just a suggestion):

    // This is where you go over all the shapes in the
    // scene and find the intersection point for the
    // closest.
    return nullptr;
}

Color computeBRDF(Intersection* intersection /* maybe other params? */)
{
    // Suggested function (you don't have to structure
    // your code in a specific way, this is just a suggestion):

    // Compute the BRDF at a given intersection point.

    // This is where you would compute shadows, if you
    // are doing it.
    return Color(0, 0, 0);
}

Color illuminate_point_light(Intersection* intersection /* maybe other params? */) {
    // Suggested function (you don't have to structure
    // your code in a specific way, this is just a suggestion):

    // it would calculate the color contribuation from a given point
    // light source at a given intersection point.
    return Color(0, 0, 0)
}

Color illuminate_directional_light(Intersection* intersection /* maybe other params? */)
{
    // Suggested function (you don't have to structure
    // your code in a specific way, this is just a suggestion):

    // it would calculate the color contribuation from a given directional
    // light source.
    return Color(0, 0, 0);
}

Color render_ray(Vect eye,
    Vect ray,
    int depth,
    std::vector<Shape*> scene,
    RenderingInfo* info)
{
    Color c = Color(0.0f, 0.0f, 0.0f);

    // This function starts with a color of zero and progressively
    // adds color to the pixel. First, determine if there is an
    // intersection point (if not, the color is zero).
    //
    // If there is an intersection point, then go over all the light
    // sources and add the contribution of that light source.
    //
    // If doing mirror reflections, add those also.
    //
    // Make sure you also add in ambient illumination.
    //
    // Finally, after adding all the color to the pixel,
    // return the color.

    return c;
}

Vect get_ray(int x, int y, RenderingInfo* info)
{
    // This function should project a ray from the origin
    // through the viewing plane into the scene.
    // Use a 45 degree field of view.
    // width/height are 800/600.

    // return the viewing ray.
}

void raytrace_scene(Frame* frame, RenderingInfo* info)
{
    DEBUGGER.start_debug();

    std::vector<Shape*> scene = setup_scene(info);

    int num_bounces = 5;

    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            DEBUGGER.start_pixel(i, j);
            Vect v = get_ray(i, j, info);
            Color c = render_ray(Vect(0.0f, 0.0f, 0.0f), v, num_bounces, scene, info);
            frame->setColor(i, j, c);
        }
    }
    DEBUGGER.draw_debug_frame(frame);
}