#include "gtest/gtest.h"
#include "../lib/Hailstone.h"
using sequence::satisfiesHailstone;

TEST(HailstoneTests, accurateValueZero) {
    EXPECT_FALSE (satisfiesHailstone(0));
}

TEST(HailstoneTests, checkValueOne) {
    EXPECT_TRUE (satisfiesHailstone(1));
}

TEST(HailstoneTests, checkEvenValues) {
    // EXPECT_TRUE (satisfiesHailstone(4));
    // EXPECT_TRUE (satisfiesHailstone(6));
    ASSERT_TRUE (satisfiesHailstone(4)); //Lab asks for different GTest Assertion types
    EXPECT_EQ (satisfiesHailstone(6), true);
}

TEST(HailstoneTests, checkOddValues) {
    // EXPECT_TRUE (satisfiesHailstone(5));
    // EXPECT_TRUE (satisfiesHailstone(7));
    ASSERT_TRUE (satisfiesHailstone(5));
    EXPECT_EQ (satisfiesHailstone(7), true);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}