#include <gtest/gtest.h>

#include "../lib/testsubject.h"

TEST(MathTest, evenSquare) {
    ASSERT_EQ (TestSubject::square(2), 4);
    ASSERT_EQ (TestSubject::square(4), 16);
    EXPECT_EQ (TestSubject::square(6), 36);
}

TEST(MathTest, oddSquare) {
    ASSERT_EQ (TestSubject::square(3), 9);
    ASSERT_EQ (TestSubject::square(5), 25);
    EXPECT_EQ (TestSubject::square(7), 49);
}

TEST(MathTest, zeroSquare) {
    ASSERT_EQ (TestSubject::square(0), 0);
}

TEST(MathTest, isEven) {
    ASSERT_TRUE (TestSubject::isEven(2));
    ASSERT_TRUE (TestSubject::isEven(4));
    ASSERT_EQ (TestSubject::isEven(6), true);
}

TEST(MathTest, isOdd) {
    ASSERT_FALSE (TestSubject::isEven(3));
    ASSERT_FALSE (TestSubject::isEven(5));
    ASSERT_EQ (TestSubject::isEven(7), false);
}

TEST(MathTest, isZero) {
    ASSERT_TRUE (TestSubject::isEven(0));
}