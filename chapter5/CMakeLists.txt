add_executable(myFilter myFilter.cpp)
target_link_libraries(myFilter ${LIBS})

add_executable(mySaltAndPepper mySaltAndPepper.cpp)
target_link_libraries(mySaltAndPepper ${LIBS})

add_executable(myGaussNoise myGaussNoise.cpp)
target_link_libraries(myGaussNoise ${LIBS})

add_executable(myBlur myBlur.cpp)
target_link_libraries(myBlur ${LIBS})

add_executable(myBoxFilter myBoxFilter.cpp)
target_link_libraries(myBoxFilter ${LIBS})

add_executable(myGaussianBlur myGaussianBlur.cpp)
target_link_libraries(myGaussianBlur ${LIBS})

add_executable(myselfFilter myselfFilter.cpp)
target_link_libraries(myselfFilter ${LIBS})

add_executable(myMedianBlur myMedianBlur.cpp)
target_link_libraries(myMedianBlur ${LIBS})

add_executable(myBilateralFilter myBilateralFilter.cpp)
target_link_libraries(myBilateralFilter ${LIBS})

add_executable(myEdge myEdge.cpp)
target_link_libraries(myEdge ${LIBS})

add_executable(mySobel mySobel.cpp)
target_link_libraries(mySobel ${LIBS})

add_executable(myScharr myScharr.cpp)
target_link_libraries(myScharr ${LIBS})

add_executable(myGetDerivKernels myGetDerivKernels.cpp)
target_link_libraries(myGetDerivKernels ${LIBS})

add_executable(myLaplacian myLaplacian.cpp)
target_link_libraries(myLaplacian ${LIBS})

add_executable(myCanny myCanny.cpp)
target_link_libraries(myCanny ${LIBS})


