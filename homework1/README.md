# Homework 1: Get OpenGL working

The objective of this homework is to get OpenGL working on your machine. This directory contains a "hello world" project that just opens up an OpenGL window. The program paints the entire window on every frame and keeps changing the color, so if it's running correctly, you'll see it fade from black to red over and over again. That's all it does, you don't actually see the words "hello world".

In order to get this program to work, you'll have to set up some OpenGL components. The specific instructions depend on what system you are using.

Detailed written instructions are in this README. If you are using Windows or Mac, you can also watch one of these video tutorials I made (you will be cloning this git repo, not the one from the semester where I recorded this):

[Windows Tutorial](https://www.youtube.com/watch?v=JRfVsgw6DBA)

[Mac Tutorial](https://www.youtube.com/watch?v=GlFHStTH8-0)

## Detailed Setup Instructions

### Windows

1. Install CMake (get it here: https://cmake.org/download/)
1. Install git if you don't have it: https://git-scm.com/download/win
1. Install Visual Studio 2022 (not just VS Code). When you install, you'll have the choice to select different options. Make sure you install any components related to command line development, C++, Graphics, and OpenGL. If in doubt, just install everything.
1. Open up the developer PowerShell with Tools > Command Line > Developer PowerShell -- you will use this for all the terminal commands.
1. git clone this repo by typing `git clone https://github.com/eeeeaarr/cs629_spring24.git` at the terminal.
1. Download 64 bit GLFW precompiled binaries from https://www.glfw.org/download.html. This will be a zipfile.
   1. Extract the zipfile. You should have a folder named "glfw-3.3.9.bin.WIN64"
   1. Put that folder in the "dependencies" folder of this project
1. Download GLEW binaries from here: https://glew.sourceforge.net/
   1. Extract the zipfile. You should have a folder named "glew-2.1.0"
   1. Put that folder in the "dependencies" folder of this project
1. There is a DLL in glew-2.1.0\bin\Release\x64 called "glew32.dll" that needs to be in the windows DLL search path when you run your program. The easiest way to do this is to just drag it into the C:\Windows\System32 folder. If you don't want to do this for some reason, you can look up other ways to set up your DLL search path in the standard Windows documentation. Note that unlike the build files, which will cause a compile error if they aren't installed correctly, if you do not install the DLL correctly your program will build, but when it runs it will just immediately quit without warning or message.

### Mac

1. Open up the Mac terminal.
1. git clone this repo by typing `git clone https://github.com/eeeeaarr/cs629_spring24.git` at the terminal.
1. Install XCode command line tools from https://developer.apple.com/xcode/resources/. Note: these should be installed in this directory by default: `/Library/Developer/CommandLineTools` -- if for some reason they are not, let me know and I'll update the CMakeLists.txt file to try a few locations. If you have an older version of MacOS you may need to download an older version of XCode.
1. Install Homebrew from https://brew.sh/
1. Type `brew install glfw` in the terminal.
1. Type `brew install glew` in the terminal.
1. POSSIBLY you need to type `brew install cmake` in the terminal

### Linux

We have not had any Linux students in a while, but if you are using a Linux machine let me know and I'll help you set it up. The setup is even easier than Windows or Mac.

## Next Steps!

After you've installed all the prerequisites, it's time to build and run your program. Open the "BUILDING.md" readme file for more information.
