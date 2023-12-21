#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <string>

class Cat: public Animal
{
	public:

		Cat();
		~Cat();
		Cat(const Cat &original);
		Cat &operator=(const Cat &assign);

		void	makeSound() const;
};

#endif