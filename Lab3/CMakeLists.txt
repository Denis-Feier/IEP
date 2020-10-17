cmake_minimum_required(VERSION 3.18)

project(LAB3_MAIN)

add_executable(${PROJECT_NAME} main.cpp)


add_subdirectory(Adder)


target_include_directories(${PROJECT_NAME} PUBLIC Adder)

target_link_directories(${PROJECT_NAME} PUBLIC Adder)

target_link_libraries(${PROJECT_NAME} adder)