#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:

		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &original);
		WrongCat &operator=(const WrongCat &assign);

		void	makeSound() const;
};

#endif