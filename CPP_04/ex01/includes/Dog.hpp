#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog: public Animal
{
	private:

		Brain	*Brains;

	public:

		Dog();
		~Dog();
		Dog(const Dog &original);

		Dog &operator=(const Dog &assign);

		void	makeSound() const ;
};

#endif