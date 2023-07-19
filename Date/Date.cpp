#include <iostream>
#include "Date.h"

Date::Date(int x, int y, int z): mYear(x), mMonth(y), mDay(z)
{			  
}

void Date::Print() const
{
	std::cout << mYear << ", " << mMonth << ", " << mDay << std::endl;
}
