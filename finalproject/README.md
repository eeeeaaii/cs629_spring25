# Final Project

## High-level Description

You will implement an OpenGL program that displays a spinning cube.

## Documentation and OpenGL version

For documentation on OpenGL and GLSL, almost everything you need should be somewhere in the lecture notes. In addition, the following resources are extremely helpful.

* [The OpenGL Wiki](https://www.khronos.org/opengl/wiki/)
* [OpenGL Reference](https://registry.khronos.org/OpenGL-Refpages/gl4/)

Note that you should be only looking at functions that are available in OpenGL 4.1 or earlier, because Macs does not natively support any higher versions. This means that in the reference, you need to look at the version matrix for each function to see if you can use it (the version matrix is toward the bottom of the page that describes that function). If you do use anything from a version later than 4.1, let me know so I can grade your homework on a Windows machine.

For GLSL, the [OpenGL Shading Language Cookbook](https://www.amazon.com/OpenGL-4-0-Shading-Language-Cookbook/dp/1849514763) is extremely helpful. The older 4.0 edition will work well with Mac.

## GLM

In addition to the third party libraries you've used in the previous homeworks, you will probably want to add GLM, which is an OpenGL-oriented library for matrix and vector math.

* For Windows, just download GLM 1.0.1 [from this link](https://github.com/g-truc/glm/releases/tag/1.0.1) and unzip it. Put the directory `glm-1.0.1-light` in your dependencies folder. CMakeLists.txt will be expecting to see it there.
* On a Mac, all you have to do is run `brew install glm`.

One of the nice things about GLM is that if you use the GLM extensions, there are helper functions that will generate things for you that are difficult to figure out on your own, in particular projection matrices.

More information can be found in [the documentation](https://glm.g-truc.net/0.9.9/api/modules.html).

## Project requirements

Your program should:

* Implement a basic OpenGL program and rendering loop.
* set up the necessary buffers to render a cube using OpenGL.
* Implement a shader that uses two types of lighting to light the cube:
  * a small amount of ambient light
  * diffuse (Lambertian) shading from a single point light source (in a fixed position somewhere near the cube)
* As the program runs, rotate the camera around the cube so you can see it from all sides.
  * Make the camera continually look at the cube.
  * This will look similar (but not exactly the same) as if you were rotating the cube around its center

[Download example MOV video file here](../examples/cube.mov) (click "download raw")

## Some Tips

* Keep track of units. For example, if you have a 1x1x1 cube in milestone 1, then put the camera around 4 units away from the origin, and put your light somewhere similar.
* Reference the week 8 class slides for examples of shader code.
* Create uniform variables for the camera position and model positions.
* Use GLM for matrix transforms in your engine.
* Put your shader code in a raw string variable in a header file (i.e. `R"()"`).
* Make sure to exit the program if shader compilation fails, and print out the error messages from shader compilation. If you don't do this, OpenGL will still try to run, but you will probably just not see anything.
* When doing lighting calculations, remember to eliminate "w" coordinates before normalizing vectors, otherwise OpenGL will include the "w" coordinate in the normalization (for example, the vector \[3.0, 0.0, 0.0, 1.0\] will change into \[0.75, 0.0, 0.0, 0.25\] instead of \[1.0, 0.0, 0.0, 1.0\]).
* To render a triangle from either side, you need to flip the normal of the triangle to point toward the camera as discussed in class (you can use the dot product to figure out whether the triangle is pointing toward or away from the camera). Either that or use the open GL mode that renders both sides of a triangle.
* Setting uniform values in a shader program doesn't work until you've called glUseProgram to activate the shader.


## What to Submit

Please submit only the following things:

1. Your source code
1. Any input files needed (such as OBJ files, etc)

Do NOT submit:

1. Visual Studio project files
1. project files from any other IDE (for example, XCode)
1. compiled binaries
