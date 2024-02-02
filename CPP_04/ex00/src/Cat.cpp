#include "../include/Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Default " << _type << " class costructor call" << std::endl;
}

Cat::Cat(std::string type)
{
	_type = type;
	std::cout << "Default " << _type << " class costructor call" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Default " << _type << " class destructor call" << std::endl; 
}

Cat::Cat(const Cat &className)
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
	std::cout << "The" << _type << " meows." << std::endl;
}
