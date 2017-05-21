cmake_minimum_required(VERSION 3.7)
project(numwords)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES numword-test.cpp numword.cpp numword.h)
add_executable(numwords ${SOURCE_FILES})