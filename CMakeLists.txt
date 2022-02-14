cmake_minimum_required(VERSION 3.21)
project(iphelper)

set(CMAKE_CXX_STANDARD 20)

add_executable(iphelper main.cc ip_translator/ip_translator.cc ip_translator/ip_translator.h)
