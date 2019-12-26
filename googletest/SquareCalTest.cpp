//
// Created by zhihui on 12/25/19.
//

#include "gtest/gtest.h"
#include "../src/SquareCal.h"
#include "../src/Point.h"
#include <vector>
#include <stdexcept>

TEST(SquareCalTestSuite, CorrectArea){

    std::vector<Point> points{Point(-2,35),Point(38,35),Point(38,-5),Point(-2,-5)};
    SquareCal square;

    ASSERT_EQ(square.calculateArea(points), 1600);

}

TEST(SquareCalTestSuite, IncorrectInputThrowsError){

    std::vector<Point> points{Point(5,2),Point(4,-4),Point(38,35),Point(38,35),Point(38,35)};
    SquareCal square;

    ASSERT_THROW(square.calculateArea(points),std::runtime_error);
}
