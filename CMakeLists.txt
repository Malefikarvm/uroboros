cmake_minimum_required(VERSION 3.3)
project(Uroboros)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    obj/Obj.h
    uro/Disk.h
    uro/Uroboros.h
    dna/Molecule.h
    dna/Atom.h
    util/Byte.h
    main.cpp)

add_executable(Uroboros ${SOURCE_FILES})