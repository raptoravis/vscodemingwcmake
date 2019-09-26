# 指定最小版本
cmake_minimum_required (VERSION 3.3)
# 指定工程名和语言类型
project (hello C)
# debug
set(CMAKE_BUILD_TYPE "Debug")
# c99
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99 -g")
# 添加子目录
add_subdirectory(src)