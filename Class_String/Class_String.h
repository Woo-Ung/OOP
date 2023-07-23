#pragma once

class String
{
	const int number{ 12 };
	char mString[12];

public:
	String(const char myString[12])
	{
		for (int i = 0; i < number;i++)
		{
			mString[i] = myString[i];
		}
	}

	~String()
	{
		delete[] mString;
	}
	void Print(String x);
};