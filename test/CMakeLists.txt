set(GTEST_SHUFFLE 1)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
add_executable(
    cpp-test
    main.cpp
    test.cpp
)

target_include_directories(cpp-test PUBLIC ../vendor/googletest/googletest/include)
target_link_libraries(cpp-test PUBLIC gtest)
