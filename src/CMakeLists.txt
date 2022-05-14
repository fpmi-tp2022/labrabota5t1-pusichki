cmake_minimum_required(VERSION 3.13)  # CMake version check
project(lab5 C)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

add_executable(binary DatabaseInfo.c TableInfo.c TP_5.c DatabaseInfo.h sqlite3.h TableInfo.h)

