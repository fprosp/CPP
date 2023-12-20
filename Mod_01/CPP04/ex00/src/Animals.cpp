#include "../include/Animal.hpp"

Animal::Animal()
{
	std::cout << "Default 'Animal' class costructor call" << std::endl;
	_type = "Tipo di animale";
}

Animal::~Animal()
{
	std::cout << "Default 'Animal' class destructor call" << std::endl; 
}

Animal::Animal(const Animal &className)
{
	std::cout << "Animal copy constructor called" << std::endl;
	_type = className._type;
}

Animal &Animal::operator=(const Animal &className)											
{
	std::cout << "Animal copy assigment operator overload called." << std::endl;
	this->_type = className._type;
	return (*this);
}

void	Animal::makeSound()
{
	std::cout << _type + " makes loud noises." << std::endl;
}