#ifndef SHRUBERRYCRATIONFORM_HPP
# define SHRUBERRYCRATIONFORM_HPP

#include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;

	public:
		ShrubberyCreationForm();															// Standard costructor	
		ShrubberyCreationForm(std::string target, int gradeToSign, int gradeToExecute);		// Custom costructor 
		ShrubberyCreationForm(const ShrubberyCreationForm &original);						// Copy costructor
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);				// Assigment operator overload 
		~ShrubberyCreationForm();															// Destructor	

		void	execute(Bureaucrat const &bureaucratObj) const;
};

#endif
