cmake_minimum_required(VERSION 3.10)
project(MarkOS_cycle)

add_library(${PROJECT_NAME}
        src/Cycle.h
        src/Cycle.cpp
        src/CycleListener.h
        )

target_link_libraries(${PROJECT_NAME} LINK_PUBLIC MarkOS_commons)
target_include_directories(${PROJECT_NAME} PUBLIC src)

add_subdirectory(test)
