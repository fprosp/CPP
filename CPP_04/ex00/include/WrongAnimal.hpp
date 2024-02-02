#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
    private:
		;

	protected:
        std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(std::string wrongsound);
		virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal &className);				// Copy constructor
		WrongAnimal &operator=(const WrongAnimal &className);	// Copy Assignment operator overload 
        
        void        makeSound() const;
        std::string getType() const;
};

#endif
