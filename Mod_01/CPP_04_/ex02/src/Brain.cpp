#include "../includes/Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain constructor." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor." << std::endl;
}

Brain::Brain(const Brain &original)
{
	for (int i = 0; i < 100; i++)
		Ideas[i] = original.Ideas[i];
	std::cout << "Brain copy done." << std::endl;
}

Brain &Brain::operator=(const Brain &assign)
{
	if (this != &assign)
	{
		for (int i = 0; i < 100; i++)
			Ideas[i] = assign.Ideas[i];
	}
	std::cout << "Brain operator called." << std::endl;
	return (*this);
}