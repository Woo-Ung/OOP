#include <iostream>
#include "Point2D_R.h"

Point2D::Point2D() : mX{}, mY{}
{

}
Point2D::Point2D(int x, int y) : mX{ x }, mY{ y }
{

}
void Point2D::Print()
{
	std::cout << "(" << mX << "," << mY << ")" << std::endl;
}

Point2D operator + (Point2D arg1, Point2D arg2)
{
	Point2D result;

	result.mX = arg1.mX + arg2.mY;
	result.mY = arg1.mY + arg2.mY;

	return result;
}