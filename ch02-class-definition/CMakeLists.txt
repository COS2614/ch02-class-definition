cmake_minimum_required(VERSION 3.5)

project(ch02-class-definition LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ch02-class-definition main.cpp person.h person.cpp)

install(TARGETS ch02-class-definition
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
