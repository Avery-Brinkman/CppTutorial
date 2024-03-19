project(04_FizzBuzz)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC_FILES
  src/main.cpp
)

add_executable(${PROJECT_NAME} ${SRC_FILES})
