cmake_minimum_required(VERSION 3.18)

project(Main)

add_subdirectory(Adder)
add_subdirectory(src)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
find_package(Adder REQUIRED)

include_directories(Adder)

target_include_directories(${PROJECT_NAME} PUBLIC Adder)

target_link_directories(${PROJECT_NAME} PRIVATE Adder)

target_link_libraries(${PROJECT_NAME} adder)