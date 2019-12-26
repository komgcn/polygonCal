set(SOURCE_FILES PolygonCal.cpp TriCal.cpp ShapeCal.h Aux.h Point.h SquareCal.cpp SquareCal.h ../include/basicPtr.h)

add_library(polygonCal ${SOURCE_FILES})

add_executable(main main.cpp ${SOURCE_FILES})

target_include_directories(polygonCal PUBLIC "${PROJECT_BINARY_DIR}")