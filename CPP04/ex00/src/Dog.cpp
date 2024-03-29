#include "../include/Dog.hpp"

Dog::Dog()
{
	std::cout << "Default 'Dog' class costructor call" << std::endl;
	_type = "Dog";
}

Dog::Dog(std::string type)
{
	std::cout << "Custom " << _type << " class costructor call" << std::endl;
	_type = type;
}

Dog::~Dog()
{
	std::cout << "Default 'Dog' class destructor call" << std::endl; 
}

Dog::Dog(const Dog &className)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_type = className._type;
}

Dog &Dog::operator=(const Dog &className)											
{
	std::cout << "Dog copy assigment operator overload called." << std::endl;
	this->_type = className._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "The " << _type + " barks." << std::endl;
}
