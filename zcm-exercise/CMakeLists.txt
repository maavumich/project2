cmake_minimum_required(VERSION 2.8)
project(ZCM_TUTORIAL)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${PROJECT_SOURCE_DIR}/cmake")

find_package(ZCM REQUIRED)

include_directories(sytem
	${ZCM_INCLUDE_DIRS})

add_executable(sender sender.cpp)
add_executable(receiver receiver.cpp)

target_link_libraries(sender ${ZCM_LIBRARY})
target_link_libraries(receiver ${ZCM_LIBRARY})
