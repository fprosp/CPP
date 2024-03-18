#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm();															// Standard costructor	
		PresidentialPardonForm(std::string target, int gradeToSign, int gradeToExecute);	// 1 custom costructor 
		PresidentialPardonForm(std::string target);											// 2 custom costructor 
		PresidentialPardonForm(const PresidentialPardonForm &original);						// Copy costructor
		PresidentialPardonForm &operator=(const PresidentialPardonForm &otherObj);			// Assigment operator overload 
		~PresidentialPardonForm();															// Destructor
		
		void	execute(Bureaucrat const &bureaucratObj) const;
};

#endif
