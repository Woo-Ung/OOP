#include <iostream>
#include "point2D.h"

int main()
{
	Point2D p1{ 3,3 };
	p1.Print();
	std::cout << p1.Distance() << std::endl;
}