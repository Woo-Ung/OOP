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
	std::cout << "�̸� : " << mName << std::endl;
	std::cout << "��ȣ : " << mNumber << std::endl;
	std::cout << "���� : " << mScore << std::endl;	
}