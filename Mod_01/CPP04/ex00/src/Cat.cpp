#include "../include/Cat.hpp"

Cat::Cat():Animal()
{
	std::cout << "Default 'Cat' class costructor call" << std::endl;
	_type = "Gatto";
}

Cat::Cat(std::string type):Animal()
{
	std::cout << "Default 'Cat' class costructor call" << std::endl;
	_type = type;
}

Cat::~Cat()
{
	std::cout << "Default 'Cat' class destructor call" << std::endl; 
}

Cat::Cat(const Cat &className):Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	_type = className._type;
}

Cat &Cat::operator=(const Cat &className)											
{
	std::cout << "Cat copy assigment operator overload called." << std::endl;
	this->_type = className._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << _type + " meows." << std::endl;
}
