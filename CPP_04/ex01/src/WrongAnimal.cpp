#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "WrongAnimal";
    std::cout << "Default " <<  _type << " costructor called " << std::endl; 
}

WrongAnimal::WrongAnimal(std::string type)
{
    _type = type;
    std::cout << "Custom " <<  _type << " costructor called " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << _type << " destructor called " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &className)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
	_type = className._type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &className)
{
    std::cout << _type << " copy assigment operator overload called." << std::endl;
    _type = className._type;
    return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << _type + " makes loud noises." << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}
