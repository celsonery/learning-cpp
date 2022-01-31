cmake_minimum_required(VERSION 3.21)
project(test01)

#find_package(cpprestsdk REQUIRED)

set(CMAKE_CXX_STANDARD 14)

add_executable(test01 main.cpp stdafx.hpp Handler.cpp Handler.hpp)

#target_link_libraries(test01 PRIVATE cpprestsdk::cpprest)