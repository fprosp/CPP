#include "../include/WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "Default " <<  _type << " costructor called " << std::endl; 
}

WrongCat::WrongCat(std::string type):WrongAnimal()
{
    _type = type;
    std::cout << "Custom " <<  _type << " costructor called " << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << _type << " destructor called " << std::endl;
}

WrongCat::WrongCat(const WrongCat &className)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
	_type = className._type;
}

WrongCat &WrongCat::operator=(const WrongCat &className)
{
    std::cout << _type << " copy assigment operator overload called." << std::endl;
    _type = className._type;
    return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << _type + " makes loud noises." << std::endl;
}

