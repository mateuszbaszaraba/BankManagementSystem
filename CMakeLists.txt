cmake_minimum_required(VERSION 3.17)
project(bank_management)

set(CMAKE_CXX_STANDARD 11)

add_executable(bank_management main.cpp Account.cpp Account.h)