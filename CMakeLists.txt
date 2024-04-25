cmake_minimum_required(VERSION 3.27)
project(OpenCV4QuickStartGuide)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)

set(LIBS m pthread
        ${OpenCV_LIBS})

add_executable(OpenCV4QuickStartGuide main.cpp)
target_link_libraries(OpenCV4QuickStartGuide ${LIBS})


##chapter1

add_executable(chapter1 chapter1/chapter1.cpp)
target_link_libraries(chapter1 ${LIBS})

##chapter2

add_executable(VideoCapture chapter2/VideoCapture.cpp)
target_link_libraries(VideoCapture ${LIBS})

add_executable(ImgWriter chapter2/ImgWriter.cpp)
target_link_libraries(ImgWriter ${LIBS})

add_executable(VideoWriter chapter2/VideoWriter.cpp)
target_link_libraries(VideoWriter ${LIBS})

add_executable(myXMLandYMAL chapter2/myXMLandYMAL.cpp)
target_link_libraries(myXMLandYMAL ${LIBS})