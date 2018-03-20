
add_executable(cycle_test
        main.cpp
        CycleTest.h
        CycleTest.cpp
        MockCycleListener.h
        )


#Link with GoogleTest
target_link_libraries(cycle_test gtest gtest_main)
#Link with GoogleMock
target_link_libraries(cycle_test gmock gmock_main)
target_link_libraries(cycle_test MarkOS_cycle)