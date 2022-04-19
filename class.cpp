#include "class.h"
#include <iostream>
using namespace std;


float Point::get_distance(const Point &a, const Point &b)
{
	return ((a.x-b.x)+(a.y-b.y));
}

