#include <iostream>
#include "Dog.h"

Dog::Dog() : mBreed{ MALTESE }
{
	std::cout << "\t[+] Dog" << std::endl;
}

Dog::~Dog()
{
	std::cout << "\t[-] Dog" << std::endl;
}

Dog::BREED Dog::GetBredd() const
{
	return Dog::BREED();
}

void Dog::SetBreed(Dog::BREED breed)
{
}

void Dog::Bark()
{
	std::cout << "Woof Woof!" << std::endl;
}
