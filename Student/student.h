#pragma once

class Student
{
	std::string mName;
	int mNumber;
	int mScore;

public:
	Student()
	{

	}
	int SetScore();
	void SetStudent(std::string x, int y, int z);
	void Print() const;	
};