#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	enum BREED
	{
		BULLDOG,
		POODLE,
		MALTESE,
		SHIBAINU
	};

private:
	BREED mBreed;

public:
	Dog();
	~Dog();

	Dog::BREED GetBredd() const;
	void SetBreed(Dog::BREED breed);

	void Bark();
};