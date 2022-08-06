#include "gtest/gtest.h"

TEST(Basic, TestShouldPASS)
{
    EXPECT_EQ(1,1);
}

TEST(simple, TestShouldFail)
{
    EXPECT_EQ(11,3);
}
