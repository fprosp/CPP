#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat: public Animal
{
	private:

		Brain	*Brains;

	public:

		Cat();
		~Cat();
		Cat(const Cat &original);

		Cat &operator=(const Cat &assign);

		void		makeSound() const;
		void		setIdeas(std::string str, int i) const;
		std::string	getIdea(int n) const;
};

#endif