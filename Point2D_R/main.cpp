#include <iostream>
#include "Point2D_R.h"

int main()
{
	Point2D pt1{ 2,3 };
	Point2D pt2{ 3,4 };

	Point2D pt3 = pt1 + pt2;
	pt3.Print();

	Point2D pt4 = pt1 + pt2 + pt3;
	pt4.Print();

	Point2D pt5 = pt2 - pt1;
	pt5.Print();

	// ++ 연산자 오버로딩
	Point2D pt6{ 1,2 }, pt7{};
	pt7 = ++pt6;

	pt6.Print();
	pt7.Print();


	pt7 = pt6++;

	pt6.Print();
	pt7.Print();
	// -- 연산자 오버로딩
	std::cout << "-----------------------------------" << std::endl;
	Point2D pt8{ 1,2 }, pt9{};
	pt9 = --pt8;

	pt8.Print();
	pt9.Print();

	pt9 = pt8--;

	pt8.Print();
	pt9.Print();

	//
	std::cout << "-----------------------------------" << std::endl;
	std::cout << pt9[0] << ", " << pt9[1] << std::endl;

	pt9[0] = 10;
	pt9[1] = 20;
	pt9['x'];

	pt9.Print();

	float dist = pt9;
	std::cout << dist << std::endl;

	pt9();
	pt9.Print();
	pt9(10, 20);
	pt9.Print();

	std::cout << pt9 << std::endl;

	std::cout << "-----------------------------------" << std::endl;
	


}