//
// Created by zhihui on 12/25/19.
//

#include "gtest/gtest.h"
#include "../src/TriCal.h"

TEST(TriCalTestSuite, CorrectArea){

    std::vector<Point> vec{Point(0,0), Point(5,2),Point(4,-4)};
    TriCal tri(vec);

    EXPECT_EQ(tri.area(),14);

}