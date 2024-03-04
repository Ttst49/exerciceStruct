cmake_minimum_required(VERSION 3.27)
project(exerciceStruct)

set(CMAKE_CXX_STANDARD 23)

add_executable(exerciceStruct main.cpp
        module/Product.h
        module/ProductList.h
        module/Product.cpp
        module/ProductList.cpp
)
