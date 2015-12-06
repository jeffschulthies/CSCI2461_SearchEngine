cmake_minimum_required(VERSION 3.3)
project(CSCI2461_SearchEngine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c pre-processing/documentRetrieval.c pre-processing/documentRetrieval.h data-structures/linkedlist.c data-structures/linkedlist.h data-structures/hashTable.c data-structures/hashTable.h)
add_executable(CSCI2461_SearchEngine ${SOURCE_FILES})