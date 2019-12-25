//
// Created by zhihui on 12/25/19.
//

#include "gtest/gtest.h"
#include "../src/SquareCal.h"

namespace{

class SquareCalTest : public testing::Test{

protected:
    void SetUp() override {
        points = {Point(-2,35),Point(38,35),Point(38,-5),Point(-2,-5)};
    }

    //TearDown() override

    std::vector<Point> points;
};

TEST_F(SquareCalTest, CorrectArea) {

        SquareCal square(points);

        EXPECT_EQ(square.area(), 1602);
}

}
