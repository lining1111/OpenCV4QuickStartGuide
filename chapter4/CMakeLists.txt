add_executable(myCalHist myCalHist.cpp)
target_link_libraries(myCalHist ${LIBS})

add_executable(myNormalize myNormalize.cpp)
target_link_libraries(myNormalize ${LIBS})

add_executable(myCompareHist myCompareHist.cpp)
target_link_libraries(myCompareHist ${LIBS})

add_executable(myEqualizeHist myEqualizeHist.cpp)
target_link_libraries(myEqualizeHist ${LIBS})

add_executable(myHistMatch myHistMatch.cpp)
target_link_libraries(myHistMatch ${LIBS})

add_executable(myCalcBackProject myCalcBackProject.cpp)
target_link_libraries(myCalcBackProject ${LIBS})

add_executable(myMatchTemplate myMatchTemplate.cpp)
target_link_libraries(myMatchTemplate ${LIBS})
