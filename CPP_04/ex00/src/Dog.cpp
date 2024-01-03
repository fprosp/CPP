#include "../includes/Dog.hpp"

Dog::Dog()
{
	Type = "Dog";
	std::cout << "I am a Dog constructor." << std::endl;
}

Dog::~Dog()
{
	std::cout << "I am a Dog destructor." << std::endl;
}

Dog::Dog(const Dog &original)
{
	Type = original.Type;
	std::cout << Type +  " copy done." << std::endl;
}

Dog &Dog::operator=(const Dog &assign)
{
	this->Type = assign.Type;
	std::cout << this->Type + " operator called." << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << Type + " barks." << std::endl;
}
