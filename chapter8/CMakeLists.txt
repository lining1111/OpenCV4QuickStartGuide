add_executable(mydft mydft.cpp)
target_link_libraries(mydft ${LIBS})

add_executable(myMulSpectrums myMulSpectrums.cpp)
target_link_libraries(myMulSpectrums ${LIBS})

add_executable(myDct myDct.cpp)
target_link_libraries(myDct ${LIBS})

add_executable(myIntegral myIntegral.cpp)
target_link_libraries(myIntegral ${LIBS})

add_executable(myFloodfill myFloodfill.cpp)
target_link_libraries(myFloodfill ${LIBS})

add_executable(myWatershed myWatershed.cpp)
target_link_libraries(myWatershed ${LIBS})

add_executable(myGrabCut myGrabCut.cpp)
target_link_libraries(myGrabCut ${LIBS})

add_executable(myPyrMeanShiftFiltering myPyrMeanShiftFiltering.cpp)
target_link_libraries(myPyrMeanShiftFiltering ${LIBS})

add_executable(myInpaint myInpaint.cpp)
target_link_libraries(myInpaint ${LIBS})