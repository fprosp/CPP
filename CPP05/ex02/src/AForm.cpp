#include "../include/AForm.hpp"

AForm::AForm():_formName("standard_module"),_signGrade(150),_executionGrade(150)
{
	std::cout << getFormName() << " standard mdule has been created " << std::endl;
	_signStatus = false;
}

AForm::AForm(std::string const name, int gradeToSign, int gradeToExecute):_formName(name),_signGrade(gradeToSign), _executionGrade(gradeToExecute)
{
	if (_signGrade < 1 || _executionGrade < 1)
		throw GradeTooHighException("AForm sign grade or exectuione grade cannot be major than 1");
	else if (_signGrade > 150 || _executionGrade > 150)
		throw GradeTooLowException("AForm sign grade or exectuione grade cannot be minor than 150");
	_signStatus = false;
	std::cout << getFormName() << " Aform has been created "  <<  std::endl;
} 

AForm::~AForm()
{
	std::cout << "Standard destructor  called for the " << getFormName() << " module." <<std::endl;
}

std::string AForm::getFormName() const
{
	return (_formName);
}

int		AForm::getSignGrade() const
{
	return (_signGrade);
}

int		AForm::getExecutionGrade() const
{
	return(_executionGrade);
}

bool	AForm::getSignStatus() const
{
	return (_signStatus);
}

void 	AForm::beSigned(Bureaucrat &bureaucratObj)
{
	if (bureaucratObj.getGrade() > this->getSignGrade())
		throw  GradeTooLowException("Bureaucrat" + bureaucratObj.getName() +  "'s grade is too low to sign Aform.");
	else if (bureaucratObj.getGrade() <= this->getSignGrade() && this->getSignStatus() == false)
		_signStatus = true;
	else 
		std::cout << bureaucratObj.getName() << " can't sign Aform named: " << this->getFormName() << " because it has already be signed." << std::endl;
	return ;
}

std::ostream &operator<<(std::ostream &os, AForm const &module)
{
    os << module.getFormName() << " Aform sign grade: " << module.getSignGrade() << " and execution grade " << module.getExecutionGrade();
    return (os);
}
