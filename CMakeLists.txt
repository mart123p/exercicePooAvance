cmake_minimum_required(VERSION 3.12)
project(examplePoo)

set(CMAKE_CXX_STANDARD 11)

add_executable(examplePoo main.cpp Point.cpp Shape.cpp Quadrilateral.cpp Rectangle.cpp Square.cpp Triangle.cpp RightTriangle.cpp)