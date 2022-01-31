cmake_minimum_required(VERSION 3.21)
project(advanced)

set(CMAKE_CXX_STANDARD 17)

add_executable(advanced main.cpp mysql/read.cpp sqlite/conn.cpp gtk/ex01.cpp gtk/ex02.cpp pgsql/conn.cpp gtk/ex03.cpp data.cpp)
