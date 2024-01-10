cmake_minimum_required(VERSION 3.8)

project("00_HelloWorld")

set(SRC_FILES
  src/main.cpp
)

add_executable(${CMAKE_PROJECT_NAME} ${SRC_FILES})

set_property(TARGET ${CMAKE_PROJECT_NAME} PROPERTY CXX_STANDARD 20)
