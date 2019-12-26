//
// Created by zhihui on 12/26/19.
//

#include "gtest/gtest.h"
#include "../src/PolygonCal.h"
#include "../src/Point.h"
#include <vector>

TEST(PolygonCalTestSuite, CorrectArea){

    std::vector<Point> points{
        Point(-4.0f, -4.6f),
        Point(-2.8f, 3.7f),
        Point(0.0f, 2.0f),
        Point(5.0f, 6.3f),
        Point(8.0f, -2.4f)};
    PolygonCal polygon;

    ASSERT_FLOAT_EQ(polygon.calculateArea(points), 76.04);

}

TEST(PolygonCalTestSuite, IncorrectInputThrowsError){

    std::vector<Point> points{Point(5,2),Point(4,-4)};
    PolygonCal polygon;

    ASSERT_THROW(polygon.calculateArea(points),std::runtime_error);
}