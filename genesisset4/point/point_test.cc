#include"point.cc"
#include<iostream>
#include<gtest/gtest.h>
TEST(point,sample){
	Point<int> p1(20,40);
	ASSERT_EQ(20, p1.xaxis());
	ASSERT_EQ(40, p1.yaxis());
	ASSERT_EQ(44,p1.distanceFromOrigin());
	ASSERT_EQ(Q1,p1.quadrant());
	std::string ExpectedOut="20,40";
	testing::internal::CaptureStdout();
	p1.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
