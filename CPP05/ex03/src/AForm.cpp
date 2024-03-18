#include "../include/AForm.hpp"

AForm::AForm():_formName("standard_module"),_signGrade(150),_executionGrade(150) 																	// Default costructor
{
	std::cout << getFormName() << " standard form has been created " << std::endl;
	_signStatus = false;
}

AForm::AForm(std::string const name, int gradeToSign, int gradeToExecute):_formName(name),_signGrade(gradeToSign), _executionGrade(gradeToExecute) // Custom costructor
{
	if (_signGrade < 1)
		throw GradeTooHighException("AForm sign grade grade cannot be major than 1");
	else if (_signGrade > 150 )
		throw GradeTooHighException("AForm sign grade grade cannot be minor than 150");
	else if (_executionGrade < 1)
		throw GradeTooLowException("AForm exectuione grade cannot be major then 1");
	else if (_executionGrade > 150)
		throw GradeTooLowException("AForm exectuione grade cannot be minor than 150");
	_signStatus = false;
	std::cout << getFormName() << " Form has been created "  <<  std::endl;
} 

AForm::AForm(const AForm &original) : _formName(original._formName), _signGrade(original._signGrade), _executionGrade(original._executionGrade)		// Copy costructor
{
	std::cout << getFormName() +  " copy done." << std::endl;
}

AForm &AForm::operator=(const AForm &other) 																										// overload
{
	std::cout << this->_formName + " operator called." << std::endl;
	return (*this);
}

AForm::~AForm()
{
	std::cout << getFormName() << " module has been destroyed." <<std::endl;
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
