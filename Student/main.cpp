#include <iostream>
#include "Student.h"

int main()
{
	std::string x;
	int y{}, z{}, number{};

	std::cout << "학생 수를 입력하세요" << std::endl;
	std::cin >> number;

	Student* pMyStudent = new Student[number];

	for (int i = 0; i < number;i++)
	{
		std::cout << "이름, 번호, 점수를 순서대로 입력하세요" << std::endl;
		std::cin >> x >> y >> z;
		pMyStudent[i].SetStudent(x,y,z);
	}

	for (int i = 0; i < number; i++)
	{
		for (int j = i + 1; j < number; j++)
		{
			if (pMyStudent[i].SetScore() < pMyStudent[j].SetScore())
			{
				Student temp = pMyStudent[i];
				pMyStudent[i] = pMyStudent[j];
				pMyStudent[j] = temp;
			}
		}
	}
		
	for (int i = 0; i < number;i++)
	{		
		pMyStudent[i].Print();
	}

	delete[] pMyStudent;
}