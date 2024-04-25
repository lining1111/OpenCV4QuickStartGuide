add_executable(myKMeanPoints myKMeanPoints.cpp)
target_link_libraries(myKMeanPoints ${LIBS})

add_executable(myKMeanImage myKMeanImage.cpp)
target_link_libraries(myKMeanImage ${LIBS})

add_executable(myKNearestTrain myKNearestTrain.cpp)
target_link_libraries(myKNearestTrain ${LIBS})

add_executable(myKNearestTest myKNearestTest.cpp)
target_link_libraries(myKNearestTest ${LIBS})

add_executable(myDTrees myDTrees.cpp)
target_link_libraries(myDTrees ${LIBS})

add_executable(myRTrees myRTrees.cpp)
target_link_libraries(myRTrees ${LIBS})

add_executable(mySVM mySVM.cpp)
target_link_libraries(mySVM ${LIBS})

add_executable(myReadNet myReadNet.cpp)
target_link_libraries(myReadNet ${LIBS})

add_executable(myImagePattern myImagePattern.cpp)
target_link_libraries(myImagePattern ${LIBS})

add_executable(myNeuralStyle myNeuralStyle.cpp)
target_link_libraries(myNeuralStyle ${LIBS})

add_executable(myGenderDetect myGenderDetect.cpp)
target_link_libraries(myGenderDetect ${LIBS})