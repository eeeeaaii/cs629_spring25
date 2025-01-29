# Homework 2: Create an OBJ file parser

The [OBJ file format](https://en.wikipedia.org/wiki/Wavefront_.obj_file) is an open source file format used to describe 3D model geometry. It was originally created by Wavefront Technologies for their Advanced Visualizer animation package, but because of its simplicity has become a de-facto standard for situations where a simple geometry description is needed for CG projects.

In this homework, you will write a program in C or C++ that:

1. Reads an OBJ file and parses it, storing it in memory in a format that will be usable by OpenGL (format provided)
1. Call a "print_model" function (provided for you) that outputs the data to the terminal.

You will be graded on how closely your output resembles the correct output.

I have provided (in the data folder) an example OBJ file that you can test with. However keep in mind this file is very simple. To really see if your program works, you should test your program with a free 3d model from the internet. I use [Turbosquid](https://turbosquid.com) but there are plenty of other options (GCTrader, Sketchfab). I don't recommend paying for a model because there are plenty of free models available. You can download and use any kind of model you want for testing.

What you will submit:

1. the source code of your program (zip up the homework2/src folder)
2. (optional) the .OBJ file that you used

The OBJ file format is simple enough that pretty much everything you need to know to implement your parser is available on the Wikipedia page (see [here](https://en.wikipedia.org/wiki/Wavefront_.obj_file) or the link above).

You can write this program in C, using C standard library functions. We went over some of these in class.

A few additional notes:

* Remember to use Blender to convert quads to triangles, or use OBJ files that have triangles only.
* Your progam can make two passes over the file: one to figure out how many vertices there are, etc., and another one to actually parse the data in the buffers that you malloc'ed based on the first pass. Read the file, close it, open it again, and read it again.
* Instead of directly using `fscanf` on the input, it's probably easier to read the input line-by-line using `fgets`, and then using `sscanf` (note the extra "s") to parse each line by itself (you can look up both these functions).
* The `strncmp` function (note the "n") might be helpful to you if you want to see if the beginning of a line starts with some string.
* Do not forget that the vertex indices in the OBJ file format are one-based, so vertex 1 will probably be stored in the "zero" index of an array.
* Make sure your line buffer is big enough (1000 bytes is probably enough).
* Please make it so I can pass in the filename via the command line (do not hardcode the file name).
* Do not forget that all the scanf functions require you to use pointers for args.
* If you use an LLM or Chat GPT to help you write this code, you should also ask it to explain how the code works, and then find whatever errors the LLM made. Frequently LLMs make mistakes with C++ code and write code that doesn't compile or work at all.

## Data format

Your data should be stored in the following format (this is provided to you in a header file):

```
struct VertexInfo
{
   // coordinates
   float x;
   float y;
   float z;
   // normal
   float normal_x;
   float normal_y;
   float normal_z;
   // texture coordinates
   float u;
   float v;
};

struct Triangle
{
    VertexInfo v1;
    VertexInfo v2;
    VertexInfo v3;
}

```

If your model doesn't have texture coordinates leave those equal to zero. The vertices should be specified in the same order they appear in the OBJ file (order is important when it comes to distinguishing the front vs. back faces of the triangle). Note that if the same vertex appears in multiple triangles, the position should be copied into the VertexInfo for each triangle.

