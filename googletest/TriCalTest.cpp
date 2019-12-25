//
// Created by zhihui on 12/25/19.
//

#include "gtest/gtest.h"
#include "../src/PolygonCal.h"

TEST(PolygonCalTestSuite, CorrectArea){

    std::vector<Point> vec{Point(0,0),Point(5,2),Point(4,-4)};
    PolygonCal pCal(vec);

    EXPECT_EQ(pCal.area(),14);

}