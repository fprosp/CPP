#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	public:

		Brain();
		~Brain();
		Brain(const Brain &original);

		Brain &operator=(const Brain &assign);

		std::string		Ideas[100];
};

#endif