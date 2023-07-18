#pragma once

class Point2D
{
private:
	int mX;
	int mY;

public:
	Point2D(int x, int y) : mX(x), mY(y)
	{
	}
	double Distance() const;
	void Print() const;
};