#include <gtest/gtest.h>
#include "../lib/Triangle.h"
using shapes::Triangle;

//three constructor tests
TEST(TriangleTests, testAscendingOrder) {
    EXPECT_DEATH (Triangle(1, 2, 3), "First side is not the longest"); //pass (function death occurs)
}

TEST(TriangleTests, testNegativeSideLengths) {
    EXPECT_DEATH (new Triangle(-4, -3, -2), "First side is not the longest"); //pass (function death occurs)
}

TEST(TriangleTests, testProperSideLengths) {
    EXPECT_NO_THROW (new Triangle(5, 4, 3)); //pass
}


//three getPerimeter() tests
TEST(TriangleTests, testPerimeter) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (aTriangle->getPerimeter(),9); //pass
}

TEST(TriangleTests, testPerimeterTwo) {
    Triangle *aTriangle = new Triangle(6, 5, 4);
    EXPECT_EQ (aTriangle->getPerimeter(), 15); //fail
}

TEST(TriangleTests, testPerimeterNoThrow) {
    Triangle *aTriangle = new Triangle(4, 3, 2);
    EXPECT_NO_THROW (aTriangle->getPerimeter()); //pass
}


//three getArea() tests
TEST(TriangleTests, testArea) {
    Triangle *aTriangle = new Triangle(5, 4, 3);
    EXPECT_DOUBLE_EQ (aTriangle->getArea(), 6.0); //fail
}

TEST(TriangleTests, testAreaTwo) {
    Triangle *aTriangle = new Triangle(17, 15, 8);
    EXPECT_DOUBLE_EQ (aTriangle->getArea(), 60.0); //fail
}

TEST(TriangleTests, testAreaNoThrow) {
    Triangle *aTriangle = new Triangle(8, 6, 3);
    EXPECT_NO_THROW (aTriangle->getArea()); //pass
}


//three isIsosceles() tests
TEST(TriangleTests, testIsoceles) {
    Triangle *aTriangle = new Triangle(7, 7, 4);
    EXPECT_TRUE (aTriangle->isIsosceles()); //pass
}

TEST(TriangleTests, testIsocelesTwo) {
    Triangle *aTriangle = new Triangle(7, 6, 5);
    EXPECT_FALSE (aTriangle->isIsosceles()); //pass
}

TEST(TriangleTests, testIsocelesThree) {
    Triangle *aTriangle = new Triangle(4, 4, 2);
    EXPECT_TRUE (aTriangle->isIsosceles()); //pass
}


//three isEquilateral() tests
TEST(TriangleTests, testEquilateral) {
    Triangle *aTriangle = new Triangle(5, 5, 5);
    EXPECT_TRUE (aTriangle->isEquilateral()); //pass
}

TEST(TriangleTests, testEquilateralTwo) {
    Triangle *aTriangle = new Triangle(9, 9, 7);
    EXPECT_FALSE (aTriangle->isEquilateral()); //pass
}

TEST(TriangleTests, testEquilateralThree) {
    Triangle *aTriangle = new Triangle(9, 9, 9);
    EXPECT_TRUE (aTriangle->isEquilateral()); //pass
}


//three getKind() tests
TEST(TriangleTests, testKindEquilateral) {
    Triangle *aTriangle = new Triangle(4, 4, 4);
    EXPECT_EQ (aTriangle->getKind(), Triangle::Kind::EQUILATERAL); //pass
}

TEST(TriangleTests, testKindIsosceles) {
    Triangle *aTriangle = new Triangle(6, 6, 4);
    EXPECT_EQ (aTriangle->getKind(), Triangle::Kind::ISOSCELES); //pass
}

TEST(TriangleTests, testKindScalene) {
    Triangle *aTriangle = new Triangle(7, 5, 3);
    ASSERT_EQ (aTriangle->getKind(), Triangle::Kind::SCALENE); //pass
}