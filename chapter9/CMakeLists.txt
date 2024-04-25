add_executable(myDrawKeypoint myDrawKeypoint.cpp)
target_link_libraries(myDrawKeypoint ${LIBS})

add_executable(myCornerHarris myCornerHarris.cpp)
target_link_libraries(myCornerHarris ${LIBS})

add_executable(myGoodFeaturesToTrack myGoodFeaturesToTrack.cpp)
target_link_libraries(myGoodFeaturesToTrack ${LIBS})

add_executable(myCornerSubPix myCornerSubPix.cpp)
target_link_libraries(myCornerSubPix ${LIBS})

add_executable(mySURF mySURF.cpp)
target_link_libraries(mySURF ${LIBS})

add_executable(myORB myORB.cpp)
target_link_libraries(myORB ${LIBS})

add_executable(myOrbMatch myOrbMatch.cpp)
target_link_libraries(myOrbMatch ${LIBS})

add_executable(myOrbMatchFlann myOrbMatchFlann.cpp)
target_link_libraries(myOrbMatchFlann ${LIBS})

add_executable(myOrbMatchRANSAC myOrbMatchRANSAC.cpp)
target_link_libraries(myOrbMatchRANSAC ${LIBS})

