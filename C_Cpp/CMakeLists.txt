#CMakeLists.txt는 항상 Proj의 최상위 폴더에 위치해야 한다.

#CMAKE PROGRAM의 최소 버전
cmake_minimum_required(VERSION 3.0.0)

#PROJECT INFORMATION
project(
    BOJ_Cpp
    VERSION 0.1.0
    DESCRIPTION "BOJ Cpp Codes"
    )

add_executable (program main.cpp)