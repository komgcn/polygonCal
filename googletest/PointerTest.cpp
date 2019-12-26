//
// Created by zhihui on 12/25/19.
//

#include "gtest/gtest.h"
#include "../include/basicPtr.h"
#include <ctime>
#include <cstdlib>

namespace{

class basicPtrTest:public testing::Test{

protected:

    void SetUp() override{
        std::srand((unsigned int)std::time(0));
        value = std::rand() % 1000;
    }

    //void TearDown() override{}

    int value;
};

    TEST_F(basicPtrTest,ConstructCorrectValue){
        basicPtr<int> pointer(new int(value));

        ASSERT_NE(*pointer, value + 1);
        ASSERT_EQ(*pointer, value);
    }


    TEST_F(basicPtrTest, OverloadAsteriskOperator){
        basicPtr<int> pointer(new int(value));

        ASSERT_EQ(*pointer, value);
    }

    TEST_F(basicPtrTest, OverloadArrowOperator){
        basicPtr<int> pointer(new int(value));

        ASSERT_EQ(*(pointer.operator->()), value);
    }

    TEST_F(basicPtrTest, FunctionGet){
        basicPtr<int> pointer(new int(value));

        ASSERT_EQ(pointer.get(), value);
    }

    TEST_F(basicPtrTest, OutofScopeDelete)
    {
        int *raw = new int(value);
        {
            basicPtr<int> pointer(raw);
        }

        EXPECT_EQ(*raw, 0);
        ASSERT_NE(*raw, value);
    }
}






