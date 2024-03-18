#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;

	public:
		void	execute(Bureaucrat const &bureaucratObj) const;
		
		PresidentialPardonForm();															// Standard costructor	
		PresidentialPardonForm(std::string target, int gradeToSign, int gradeToExecute);	// Custom costructor 
		PresidentialPardonForm(const PresidentialPardonForm &original);						// Copy costructor
		PresidentialPardonForm &operator=(const PresidentialPardonForm &otherObj);			// Assigment operator overload 
		~PresidentialPardonForm();															// Destructor
};

#endif
