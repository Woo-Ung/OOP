#pragma once

const int number{12};

class String
{
	char myString[number];
public:
	String() : myString{}
	{

	}
	void Print(String x);
};