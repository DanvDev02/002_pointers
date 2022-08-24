cmake_minimum_required(VERSION 3.22)
project(pointers)
set(CMAKE_C_STANDARD 99)

add_library(${PROJECT_NAME} pointers.c pointers.h)
