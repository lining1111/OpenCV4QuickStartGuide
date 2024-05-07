cmake_minimum_required(VERSION 3.27)
project(OpenCV4QuickStartGuide)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)

set(LIBS m pthread zbar
        ${OpenCV_LIBS})

add_executable(OpenCV4QuickStartGuide main.cpp)
target_link_libraries(OpenCV4QuickStartGuide ${LIBS})


##chapter1
add_subdirectory(chapter1)
##chapter2
add_subdirectory(chapter2)
##chapter3
add_subdirectory(chapter3)
##chapter4
add_subdirectory(chapter4)
##chapter5
add_subdirectory(chapter5)
##chapter6
add_subdirectory(chapter6)
##chapter7
add_subdirectory(chapter7)
##chapter8
add_subdirectory(chapter8)
##chapter9
add_subdirectory(chapter9)
##chapter10
add_subdirectory(chapter10)
##chapter11
add_subdirectory(chapter11)
##chapter12
add_subdirectory(chapter12)