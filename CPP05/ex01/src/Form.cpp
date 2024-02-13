#include "../include/Form.hpp"

Form::Form():_formName("standard_module"),_signGrade(150),_executionGrade(150)
{
	std::cout << getFormName() << " standard mdule has been created " << std::endl;
	_signStatus = false;
}

Form::Form(std::string const name, int gradeToSign, int gradeToExecute):_formName(name),_signGrade(gradeToSign), _executionGrade(gradeToExecute)
{
	if (_signGrade < 1 || _executionGrade < 1)
		throw GradeTooHighException("Form sign grade or exectuione grade cannot be major than 1");
	else if (_signGrade > 150 || _executionGrade > 150)
		throw GradeTooLowException("Form sign grade or exectuione grade cannot be minor than 150");
	_signStatus = false;
	std::cout << getFormName() << " form has been created "  <<  std::endl;
} 

Form::~Form()
{
	std::cout << "Standard destructor  called for the " << getFormName() << " module." <<std::endl;
}

std::string Form::getFormName() const
{
	return (_formName);
}

int		Form::getSignGrade() const
{
	return (_signGrade);
}

int		Form::getExecutionGrade() const
{
	return(_executionGrade);
}

bool	Form::getSignStatus() const
{
	return (_signStatus);
}

void 	Form::beSigned(Bureaucrat &bureaucratObj)
{
	if (bureaucratObj.getGrade() > this->getSignGrade())
		throw  GradeTooLowException("Bureaucrat" + bureaucratObj.getName() +  "'s grade is too low to sign form.");
	else if (bureaucratObj.getGrade() <= this->getSignGrade() && this->getSignStatus() == false)
		_signStatus = true;
	else 
		std::cout << bureaucratObj.getName() << " can't sign form named: " << this->getFormName() << " because it has already be signed." << std::endl;
	return ;
}

std::ostream &operator<<(std::ostream &os, Form const &module)
{
    os << module.getFormName() << " form sign grade: " << module.getSignGrade() << " and execution grade " << module.getExecutionGrade();
    return (os);
}
