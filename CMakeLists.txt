cmake_minimum_required(VERSION 3.16)
project(freehand_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(OpenCV REQUIRED)

add_executable(freehand src/main.cpp)
target_link_libraries(freehand PRIVATE ${OpenCV_LIBS})
