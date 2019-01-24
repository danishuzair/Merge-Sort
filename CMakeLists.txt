cmake_minimum_required(VERSION 2.6)
project(mergesort)

add_executable(mergesort main.cpp mergesort.cpp cfileinout.cpp)

install(TARGETS mergesort RUNTIME DESTINATION bin)
