project(googletest)

# 'lib' is the folder with Google Test sources
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
# 'TriCalTest.cpp' is source files with tests
add_executable(Google_Tests_run TriCalTest.cpp SquareCalTest.cpp PointerTest.cpp PolygonCalTest.cpp)


target_link_libraries(Google_Tests_run gtest gtest_main polygonCal)
