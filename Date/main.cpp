#include <iostream>
#include "Date.h"

int main()
{
	int x{}, y{}, z{};
	std::cin >> x >> y >> z;
	Date MyDay{ x,y,z };
	MyDay.Print();
}