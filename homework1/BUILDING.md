# Building your project

The easiest thing will be if you build and run your projects from the command line (Terminal on MacOS, Powershell on Windows). This is also how I will be grading your projects so it's in your best interest to do it this way.

## Mac

Right click on the "build" folder and choose "New Terminal at Folder" (or use the cd command in a terminal to change directories into the build folder).

To create the build files:

`cmake ..`

To build (compile) your code:

`cmake --build .` (or) `make`

To run your program:

`./homework1`

## Windows

Right click on the "build" folder and choose "Open in Terminal". This will run Powershell.

To create the build files:

`cmake ..`

To build (compile) your code:

`cmake --build .` (You can also build your file in Visual Studio by opening up the .sln file that CMake created for you, however I do not recommend this unless you're fairly proficient with Visual Studio).

To run your program:

`.\Debug\homework1.exe` (or possibly) `.\Debug\x64\homework1.exe`
