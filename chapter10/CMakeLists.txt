add_executable(myHomogeneous myHomogeneous.cpp)
target_link_libraries(myHomogeneous ${LIBS})

add_executable(myChessboard myChessboard.cpp)
target_link_libraries(myChessboard ${LIBS})

add_executable(myCalibrateCamera myCalibrateCamera.cpp)
target_link_libraries(myCalibrateCamera ${LIBS})

add_executable(myUndistortion myUndistortion.cpp)
target_link_libraries(myUndistortion ${LIBS})

add_executable(myProjectPoints myProjectPoints.cpp)
target_link_libraries(myProjectPoints ${LIBS})

add_executable(myPnpAndRansac myPnpAndRansac.cpp)
target_link_libraries(myPnpAndRansac ${LIBS})

add_executable(myStereoCalibrate myStereoCalibrate.cpp)
target_link_libraries(myStereoCalibrate ${LIBS})

add_executable(myStereoRectify myStereoRectify.cpp)
target_link_libraries(myStereoRectify ${LIBS})
