﻿# CMakeList.txt : CMake project for Week1, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Corey_Lab1 "Week1.cpp" "Week1.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Corey_Lab1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
