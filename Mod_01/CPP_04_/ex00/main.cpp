#include "includes/Animal.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongCat.hpp"
#include <iostream>

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* beta = new WrongAnimal();
	const WrongAnimal* c = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	c->makeSound();
	beta->makeSound();

	delete j;
	delete i;
	delete c;
	delete beta;
	delete meta;
	
	return (0);
}