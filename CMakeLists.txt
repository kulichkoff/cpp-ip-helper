cmake_minimum_required(VERSION 3.21)
project(iphelper)

set(CMAKE_CXX_STANDARD 20)

add_executable(iphelper main.cpp IPTranslator/IPTranslator.cpp IPTranslator/IPTranslator.h)
