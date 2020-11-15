cmake_minimum_required(VERSION 3.18)

project(Main)

add_subdirectory(brawler)
add_subdirectory(src)

include_directories(brawler)

target_include_directories(${PROJECT_NAME} PUBLIC brawler)

target_link_directories(${PROJECT_NAME} PRIVATE brawler)

target_link_libraries(${PROJECT_NAME} brawler)