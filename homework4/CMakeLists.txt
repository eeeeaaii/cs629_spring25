cmake_minimum_required(VERSION 3.10)

project(homework3)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Note to student: do not change this file without prior approval from the instructor.

file(GLOB_RECURSE SOURCES src/*.c src/*.h src/*.cpp src/*.hpp)
add_executable(homework3 ${SOURCES})

if(APPLE)
   set(CMAKE_OSX_SYSROOT "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk")
   set(CMAKE_C_COMPILER "/Library/Developer/CommandLineTools/usr/bin/gcc")
   set(CMAKE_CXX_COMPILER "/Library/Developer/CommandLineTools/usr/bin/g++")

   find_package(glfw3 REQUIRED)
   find_package(GLEW REQUIRED)

   target_link_libraries(homework3 PRIVATE
      glfw
      GLEW::GLEW
      "-framework OpenGL"
   )   

endif()

if(WIN32)
   set(DEPS "${CMAKE_CURRENT_SOURCE_DIR}/../dependencies")

   # Include directories
   target_include_directories(homework3 PRIVATE
      "${DEPS}/glew-2.1.0/include"
      "${DEPS}/glfw-3.3.9.bin.WIN64/include"
   )
   
   # Link directories
   target_link_directories(homework3 PRIVATE
      "${DEPS}/glew-2.1.0/lib/Release/x64"
      "${DEPS}/glfw-3.3.9.bin.WIN64/lib-vc2022"
   )

   target_link_libraries(homework3 PRIVATE
      glew32
      glfw3
      opengl32
   )

endif()
