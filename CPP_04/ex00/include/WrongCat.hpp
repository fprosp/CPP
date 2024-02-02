#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp" 

class WrongCat: public WrongAnimal
{
	protected:
		;

	public:
		WrongCat();
		WrongCat(std::string wrongsound);
		~WrongCat();
		WrongCat(const WrongCat &className);				// Copy constructor
		WrongCat &operator=(const WrongCat &className);		// Copy Assignment operator overload 
		
		void	makeSound() const;
};

#endif
