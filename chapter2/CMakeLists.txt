add_executable(VideoCapture VideoCapture.cpp)
target_link_libraries(VideoCapture ${LIBS})

add_executable(ImgWriter ImgWriter.cpp)
target_link_libraries(ImgWriter ${LIBS})

add_executable(VideoWriter VideoWriter.cpp)
target_link_libraries(VideoWriter ${LIBS})

add_executable(myXMLandYAML myXMLandYAML.cpp)
target_link_libraries(myXMLandYAML ${LIBS})