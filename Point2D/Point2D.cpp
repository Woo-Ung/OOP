#include <iostream>
#include <cmath>
#include "Point2D.h"


double Point2D::Distance() const
{
    return sqrt(mX * mX + mY * mY);
}

void Point2D::Print() const
{
    std::cout << "(" << mX << "," << mY << ")" << std::endl;
}