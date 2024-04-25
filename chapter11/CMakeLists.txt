add_executable(myAbsdiff myAbsdiff.cpp)
target_link_libraries(myAbsdiff ${LIBS})

add_executable(myMeanShift myMeanShift.cpp)
target_link_libraries(myMeanShift ${LIBS})

add_executable(myCamShift myCamShift.cpp)
target_link_libraries(myCamShift ${LIBS})

add_executable(myCalcOpticalFlowFarneback myCalcOpticalFlowFarneback.cpp)
target_link_libraries(myCalcOpticalFlowFarneback ${LIBS})

add_executable(myCalcOpticalFlowPyrLK myCalcOpticalFlowPyrLK.cpp)
target_link_libraries(myCalcOpticalFlowPyrLK ${LIBS})