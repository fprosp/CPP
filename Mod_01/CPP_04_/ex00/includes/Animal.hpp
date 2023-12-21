#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:

		std::string		Type;

	public:

		Animal();
		virtual ~Animal();
		Animal(const Animal &original);
		Animal &operator=(const Animal &assign);

		std::string			getType() const;
		virtual void		makeSound() const;
};

#endif