#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

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
		virtual void		makeSound() const = 0; //per essere abstract, una classe deve avere almeno un metodo virtuale puro, ovvero il metodo non deve essere inizializzato
};

#endif