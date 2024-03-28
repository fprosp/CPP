#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():_target("Form_PresidentialPardonForm"), AForm("Default_PresidentialPardonForm", 150, 150)		//Default costructor 
{
	std::cout << "PresidentialPardonForm form with standard values cration." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target, int gradeToSign, int gradeToExecute):_target(target), AForm("PresidentialPardonForm", gradeToSign, gradeToExecute)	// Custom costructor
{
	std::cout << "PresidentialPardonForm document with custom values creation." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &classObj):_target(classObj._target), AForm(classObj)				// Copy costructor
{
	std::cout << " PresidentialPardonForm creation with " << classObj.getFormName() << " values." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) 													// Copy assigment operator overload
{	
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destruction PresidentialPardonForm" << std::endl;
}

void 	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (getSignStatus() != true)
		throw NotSignedForm(getFormName() + " did not recived sign. Any form need to be signed before the execution");
    else if (executor.getGrade() > getExecutionGrade())
        throw GradeTooLowException(executor.getName() + " grade is too low to execute form" + getFormName());
	else
	{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
} 

