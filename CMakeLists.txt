cmake_minimum_required(VERSION 3.23)
project(helloLib)

set(CMAKE_CXX_STANDARD 14)


add_library(LAB SHARED main.cpp)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)#设置动态库输出目录