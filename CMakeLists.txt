cmake_minimum_required(VERSION 3.10.2)
project(main)

set(PROJECT_SRC_DIR ./src)
set(PROJECT_INC_DIR ./include)

add_executable(	main
		${PROJECT_SRC_DIR}/main.cpp
		${PROJECT_SRC_DIR}/House.cpp
		${PROJECT_SRC_DIR}/Mansion.cpp
               	${PROJECT_INC_DIR}/House.h
		${PROJECT_INC_DIR}/Mansion.h)

