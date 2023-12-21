#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public Animal
{
	private:
		Brain *_brain;

	public:
		Cat();										// Default costructor
		Cat(std::string type);						// Custom costructor
		~Cat();										// Default destructor
		Cat(const Cat &className);					// Copy constructor
		Cat &operator=(const Cat &className);		// Copy Assignment operator overload 

		void		setIdeas(std::string str, int i) const;
		std::string	getIdea(int i) const;

};

#endif
