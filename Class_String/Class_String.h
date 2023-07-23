#pragma once

const int mNumber{ 12 };

class String
{	
	char mString[mNumber]{};

public:	
	String(const char myString[mNumber])
	{		
		for (int i = 0; i < mNumber;i++)
		{
			mString[i] = myString[i];
		}
	}

	void Print(String x);
};