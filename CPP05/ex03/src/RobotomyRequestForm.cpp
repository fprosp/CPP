#include "../include/RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm():_target("Form"), AForm("Default_form", 150, 150) 													// Default costructor
{
	std::cout << "Default RobotomyRequestForm creation." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): _target(target), AForm("Default_RobotomyRequestForm", 150, 150)					// 1 custom costructor
{
	std::cout << "RobotomyRequestForm document with custom values creation." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target, int gradeToSign, int gradeToExecute):_target(target), AForm("RobotomyRequestForm", gradeToSign, gradeToExecute) 	// 2 custom costructor 
{
	std::cout << "RobotomyRequestForm document created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original) : _target(original._target), AForm(original) 						// Copy costructor
{
	std::cout << " RobotomyRequestForm creation with " << original.getFormName() << "values." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) 															// Copy overload
{
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()																										// Destructor
{
	std::cout << "RobotomyRequestForm destruction." << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &bureaucratObj) const
{
	if (getSignStatus() != true)
		throw NotSignedForm(getFormName() + " did not recived sign. Any form need to be signed before the execution");
    if (bureaucratObj.getGrade() > getExecutionGrade())
        throw GradeTooLowException(bureaucratObj.getName() + " grade is too low to execute form" + getFormName());
	std::srand(time(NULL));
	if ((rand()%10 + 1) <= 5)
	{
		std::cout << "Drilling noises" << std::endl;
		std::cout << _target << " successfully robotomized" << std::endl;
	}
    else
        std::cerr << "Unable to robotomize file" << std::endl;
}
