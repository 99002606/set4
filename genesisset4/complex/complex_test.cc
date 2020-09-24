#include"complex.cc"
#include<iostream>
#include<gtest/gtest.h>
TEST(Complex,sample){
	Complex<int> c1(10,20);
	ASSERT_EQ(10, c1.real());
	ASSERT_EQ(20, c1.image());
	std::string ExpectedOut="10+i20";
	testing::internal::CaptureStdout();
	c1.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

