#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal();											// Default costructor
		Animal(std::string verso);						  	// Custom custructor
		~Animal();											// Default destructor
		Animal(const Animal &className);					// Copy constructor
		Animal &operator=(const Animal &className);			// Copy Assignment operator overload 
		
		void 	makeSound()	const;
		std::string		getType() const;
};

#endif