cmake_minimum_required(VERSION 3.21)

project(test05)

find_package(Poco REQUIRED Net Util)

set(CMAKE_CXX_STANDARD 14)

add_executable(test05 main.cpp)

target_link_libraries(test05 PocoNet PocoUtil)