cmake_minimum_required(VERSION 3.10)
project(Text-Editor
  VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(
  Text_Ed 
  src/main.cpp
  src/Editor.cpp
  src/File.cpp
  src/User.cpp
)

target_include_directories(Text_Ed 
  PUBLIC inc
)

target_link_libraries(Text_Ed 
  PUBLIC ncurses
)