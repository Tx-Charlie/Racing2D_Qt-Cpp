cmake_minimum_required(VERSION 3.16)

# project name
project(Racing2D)

# Qt
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)


# deps
find_package(Qt5  REQUIRED COMPONENTS Widgets)

list(APPEND LINK_LIBS Qt5::Widgets)

# include directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
list(APPEND INCLUDE_DIRS
	${CMAKE_CURRENT_SOURCE_DIR}
	${CMAKE_CURRENT_SOURCE_DIR}/src
	${CMAKE_CURRENT_SOURCE_DIR}/resources)

# src
FILE(GLOB_RECURSE SOURCES src/*.cpp)

# resource
FILE(GLOB_RECURSE RESOURCES resources/*.qrc)

# target
add_executable(${PROJECT_NAME} ${SOURCES} ${RESOURCES})
target_link_libraries(${PROJECT_NAME} ${LINK_LIBS})
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIRS})
