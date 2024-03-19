cmake_minimum_required(VERSION 3.8)
project(CppTutorial LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(00_HelloWorld)
add_subdirectory(02_Conditionals)
add_subdirectory(03_Loops)
add_subdirectory(04_FizzBuzz)
