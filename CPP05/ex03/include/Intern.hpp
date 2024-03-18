#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{
	public:
		Intern();									// Default costructor
		Intern(Intern const &form); 				// Copy costructor
		Intern& operator=(Intern const &other); 	// Assignation Operator Overloading
		~Intern();									// Default destructor

		AForm	*makeForm(std::string formName, std::string formTarget);
};

#endif