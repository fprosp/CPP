#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	protected:

		std::string		Type;

	public:

		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &original);

		WrongAnimal &operator=(const WrongAnimal &assign);

		std::string	getType() const;
		void		makeSound() const;
};

#endif