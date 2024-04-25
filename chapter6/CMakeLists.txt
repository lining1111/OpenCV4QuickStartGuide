add_executable(myDistanceTransform myDistanceTransform.cpp)
target_link_libraries(myDistanceTransform ${LIBS})

add_executable(myConnectedComponents myConnectedComponents.cpp)
target_link_libraries(myConnectedComponents ${LIBS})

add_executable(myConnectedComponentsWithStats myConnectedComponentsWithStats.cpp)
target_link_libraries(myConnectedComponentsWithStats ${LIBS})

add_executable(myErode myErode.cpp)
target_link_libraries(myErode ${LIBS})

add_executable(myDilate myDilate.cpp)
target_link_libraries(myDilate ${LIBS})

add_executable(myMorphologyApp myMorphologyApp.cpp)
target_link_libraries(myMorphologyApp ${LIBS})

add_executable(myThinning myThinning.cpp)
target_link_libraries(myThinning ${LIBS})
