#include"stack.cpp"
#include<gtest/gtest.h>
TEST(a,b){
	MyStack<int> s1(3);
	s1.push(1);
	s1.push(2);
	s1.push(3);
	ASSERT_EQ(3,s1.pop());
}
