cmake_minimum_required(VERSION 3.24)
project(Sorter)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Sorter
        main.cpp
        class/Array.cpp
        class/Array.h
        class/RandMT.cpp
        class/RandMT.h
        class/Message.cpp
        class/Message.h
        class/User.cpp
        class/User.h)
