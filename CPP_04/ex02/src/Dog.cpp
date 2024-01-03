#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog()
{
	Type = "Dog";
	Brains = new Brain();
	std::cout << "I am a Dog constructor." << std::endl;
}

Dog::~Dog()
{
	delete Brains;
	std::cout << "I am a Dog destructor." << std::endl;

}

Dog::Dog(const Dog &original)
{
	Type = original.Type;
	Brains = new Brain(*original.Brains);
	std::cout << Type +  " copy done." << std::endl;
}

Dog &Dog::operator=(const Dog &assign)
{
	this->Type = assign.Type;
	if (this->Brains != assign.Brains)
	{
		delete Brains;
		Brains = new Brain(*assign.Brains);
	}
	std::cout << this->Type + " operator called." << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << Type + " barks." << std::endl;
}
