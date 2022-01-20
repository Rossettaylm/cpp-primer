cmake_minimum_required(VERSION 3.10)

project(main)

# 添加源文件目录作为变量var
aux_source_directory(. var)

add_executable(stringstream ${var})
# add_executable(homework homework.cpp)

