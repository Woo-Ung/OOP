#pragma once
#include "Animal.h"
class Cat :  public Animal
{
public:
	enum BREED
	{
		KOREANSHORT,
		MUNCHKIN,
		RUSSUANBLUE,
		TURKISHANGORA
	};

private:
	BREED mBreed;

public:
	Cat();
	~Cat();

	BREED GetBreed() const;
	void SetBreed(BREED breed);

	void Grooming();
};

