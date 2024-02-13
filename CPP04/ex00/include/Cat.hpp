#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat:public Animal
{
	protected:
		;

	public:
		Cat();										// Default costructor
		Cat(std::string type);						// Custom costructor
		~Cat();										// Default destructor
		Cat(const Cat &className);					// Copy constructor
		Cat &operator=(const Cat &className);		// Copy Assignment operator overload 

		void	makeSound() const;
};

#endif
