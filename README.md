# cs629 spring 2025 Homework Starter Projects

## General information:

You are currently looking at a github repository containing the homework "starter" files. Each homework has its own directory with the starter files you need for that homework. You'll do a "git clone" to copy these files to your local machine, and do any setup as needed to get the files to compile, etc. You can also just download a zip file.

[Homework 1: OpenGL "Hello World"](homework1/)

The homework starter projects are intended to be built using CMake. CMake is a cross-platform "build file builder" -- it will try to create a set of build files that work on your platform.

You should not change the starter files unless there are comments that say "TODO(student)". In particular, in order to ensure that I have the same build environment you do, you should not change CMakeLists.txt.

Generally, in each homework directory what you will do is:

```
cd homeworkN/build
cmake ..
cmake --build .
```

The first command navigates to the directory where you will build the second project. The second command creates the build files, and the third command builds it.

To run the project, on Mac you will do:

```
./homeworkN
```

And on windows something like:

```
.\Debug\homeworkN.exe
```

For specific setup instructions for your platform, go into the Homework 1 folder and read the README there.

## Resources
* [PowerShell for Programmers](https://devblogs.microsoft.com/scripting/powershell-for-programmers-a-quick-start-guide/)
* [Web Developer's Guide to the Mac Terminal](https://scrimba.com/articles/web-developer-terminal/)
* [Linux Terminal for Beginners](https://ubuntu.com/tutorials/command-line-for-beginners#1-overview)
* [Learn the Basics of Git in Under 10 Minutes](https://www.freecodecamp.org/news/learn-the-basics-of-git-in-under-10-minutes-da548267cc91/)
