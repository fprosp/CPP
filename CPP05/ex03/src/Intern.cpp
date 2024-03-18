#include "../include/Intern.hpp"


Intern::Intern()											// Default costructor 
{
	std::cout << "Intern has been hired" << std::endl;
}

Intern::Intern(const Intern &original)						// Copy costructor
{
	*this = original;
}

Intern &Intern::operator=(const Intern &other)				// Assigment operator
{
	(void)other;
	return (*this);
}

Intern::~Intern()											// Default destructor
{
	std::cout << "Intern has been fired" << std::endl;
}

AForm	*Intern::makeForm(std::string formToMake, std::string formTarget)
{
	AForm *createdForm = NULL;
	std::string formStr[] = {"presidential pardon", "robotomy request", "shruberry creation"};
	int i = 0;
	while (formStr[i] != formToMake)
		i++;
	switch (i)
	{
		case 0:
			createdForm = new ShrubberyCreationForm(formTarget);
			std::cout << "Intern creates " << formToMake << std::endl;
			break ;
		case 1:
			createdForm = new PresidentialPardonForm(formTarget);
			std::cout << "Intern creates " << formToMake << std::endl;
			break ;
		case 2:
			createdForm = new RobotomyRequestForm(formTarget);
			std::cout << "Intern creates " << formToMake << std::endl;
			break ;
		default:
			std::cout << "Intern failed to create a form" << std::endl;
			break ;
	}
	return (createdForm);

}