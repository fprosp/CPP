#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog:public Animal
{
	protected:
		;

	public:
		Dog();										// Default costructor
		Dog(std::string type);						// Custom costructor
		~Dog();										// Default destructor
		Dog(const Dog &className);					// Copy constructor
		Dog &operator=(const Dog &className);		// Copy Assignment operator overload 

		void	makeSound() const;
};

#endif
