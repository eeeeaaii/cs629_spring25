cmake_minimum_required(VERSION 3.10)

project(finalproject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Note to student: do not change this file without prior approval from the instructor.

file(GLOB SOURCES src/*.cpp)
add_executable(finalproject ${SOURCES})

if(APPLE)
   set(CMAKE_OSX_SYSROOT "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk")
   set(CMAKE_C_COMPILER "/Library/Developer/CommandLineTools/usr/bin/gcc")
   set(CMAKE_CXX_COMPILER "/Library/Developer/CommandLineTools/usr/bin/g++")

   find_package(glfw3 REQUIRED)
   find_package(GLEW REQUIRED)

   target_link_libraries(finalproject PRIVATE
      glfw
      GLEW::GLEW
      "-framework OpenGL"
   )   

endif()

if(WIN32)
   set(DEPS "${CMAKE_CURRENT_SOURCE_DIR}/../dependencies")

#   set(GLEW_LIBRARY "${DEPS}/glew-2.1.0/lib/Release/x64/glew32.lib")
#   set(GLFW_LIBRARY "${DEPS}/glfw-3.4.bin.WIN64/lib-vc2022/glfw3.lib")

   # Include directories
   target_include_directories(finalproject PRIVATE
      "${DEPS}/glew-2.1.0/include"
      "${DEPS}/glfw-3.3.9.bin.WIN64/include"
   )
   
   # Link directories
   target_link_directories(finalproject PRIVATE
      "${DEPS}/glew-2.1.0/lib/Release/x64"
      "${DEPS}/glfw-3.3.9.bin.WIN64/lib-vc2022"
   )

   target_link_libraries(finalproject PRIVATE
      glew32
      glfw3
      opengl32
   )

endif()
