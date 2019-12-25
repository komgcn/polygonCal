//
// Created by zhihui on 12/25/19.
//

#include "gtest/gtest.h"
#include "../include/basicPtr.h"

TEST(PointerTestSuite,ConstructCorrectValue)
{
    int value = 18;

    basicPtr<int> pointer(new int(value));

    ASSERT_NE(*pointer,value +1);
    ASSERT_EQ(*pointer,value);
}


TEST(PointerTestSuite,OutofScopeDelete)
{
    int value = 5;
    int *num = new int(value);
    {
        basicPtr<int> pointer(num);
    }

    EXPECT_NE(*num,value);
    ASSERT_EQ(*num,0);
}

