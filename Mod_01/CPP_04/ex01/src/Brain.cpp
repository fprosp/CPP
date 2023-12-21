#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "Default 'Brain' class costructor call" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Default 'Brain' class destructor call" << std::endl; 
}

Brain::Brain(const Brain &original)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = original._ideas[i]; 
	std::cout << "Brain copy done." << std::endl;
}

Brain &Brain::operator=(const Brain &assign)
{
	if (this != &assign)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = assign._ideas[i];
	}
	std::cout << "Brain operator called." << std::endl;
	return (*this);
}
