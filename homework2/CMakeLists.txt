cmake_minimum_required(VERSION 3.10)

project(homework2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Note to student: do not change this file without prior approval from the instructor.

file(GLOB SOURCES src/*.c src/*.h)
add_executable(homework2 ${SOURCES})

if(APPLE)
   set(CMAKE_OSX_SYSROOT "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk")
   set(CMAKE_C_COMPILER "/Library/Developer/CommandLineTools/usr/bin/gcc")
   set(CMAKE_CXX_COMPILER "/Library/Developer/CommandLineTools/usr/bin/g++")
endif()

