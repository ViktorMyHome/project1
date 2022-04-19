#include <iostream>
#include <gtest/gtest.h>
#include "class.h"

using namespace std;

//comment 1

TEST(Point, test1)
{
	Point a(1,1);
	Point b(0,0);
	ASSERT_EQ(3,a.get_distance(a,b));
}


TEST(Point, test)
{
	Point a(1,1);
	Point b(0,0);
	ASSERT_EQ(4,a.get_distance(a,b));
}




int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

