cmake_minimum_required(VERSION 3.22.1)
project("name of the project")
add_executable(program main.c string.c)
install(TARGETS program RUNTIME DESTINATION bin)
