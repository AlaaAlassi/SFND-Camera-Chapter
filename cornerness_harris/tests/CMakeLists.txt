# Add testing executable
enable_testing()

add_executable(
    harris_detector_test
    harris_detector_test.cpp
)
target_link_libraries(
    harris_detector_test
    gtest
    -pthread
    ${OpenCV_LIBRARIES}
)