#include <iostream>
#include "student.h"

int Student::SetScore()
{
	return mScore;
}

void Student::SetStudent(std::string x, int y, int z)
{
	mName = x;
	mNumber = y;
	mScore = z;
}

void Student::Print() const
{
	std::cout << "------------------" << std::endl;
	std::cout << "이름 : " << mName << std::endl;
	std::cout << "번호 : " << mNumber << std::endl;
	std::cout << "점수 : " << mScore << std::endl;	
}