set(SOURCE_FILES main.cpp PolygonCal.cpp TriCal.cpp ShapeCal.h Aux.h Point.h SquareCal.cpp SquareCal.h ../include/basicPtr.h)

add_library(polygonCal ${SOURCE_FILES})

target_include_directories(polygonCal PUBLIC "${PROJECT_BINARY_DIR}")