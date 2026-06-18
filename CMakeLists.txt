cmake_minimum_required(VERSION 3.15)

project(simple_logger)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(simple-logger
    LogClass/main.cpp
    LogClass/Logger.cpp
)
