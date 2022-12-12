cmake_minimum_required(VERSION 3.15) 

set(PROJECT_NAME test)
project("${PROJECT_NAME}")

set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_EXTENSION OFF)
set(CMAKE_CXX_STANDART_REQUIRED TRUE)
		
add_executable("${PROJECT_NAME}" main.cpp)
								
								
