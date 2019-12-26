//
// Created by zhihui on 12/25/19.
//

#include "gtest/gtest.h"
#include "../src/TriCal.h"
#include "../src/Point.h"
#include <vector>
#include <stdexcept>

TEST(TriCalTestSuite, CorrectArea){

    std::vector<Point> points{Point(0,0), Point(5,2),Point(4,-4)};
    TriCal triangle;

    ASSERT_EQ(triangle.calculateArea(points), 14);
}

TEST(TriCalTestSuite, IncorrectInputThrowsError){

    std::vector<Point> points{Point(5,2),Point(4,-4)};
    TriCal triangle;

    ASSERT_THROW(triangle.calculateArea(points),std::runtime_error);
}