#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("Francesco")
{
	_grade = 150;
	std::cout << "Operator: " << getName() << "has been hired with standars grade:" << getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade):_name(name)
{
	if (grade < 1)
		throw GradeTooHighException("Grade cannot be major than 1.");
	else if (grade > 150)
		throw GradeTooHighException("Grade cannot be minor than 150.");
	_grade = grade;
	std::cout << "Operator: " << getName() << " has been hired with grade: " << getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &className):_name(className._name), _grade(className._grade) 
{
	std::cout << "Copy constructor call" << std::endl;
	_grade = className._grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &className) 
{
	std::cout << "Copy assigment operator overload called." << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << getName() << " has been fired " << std::endl; 
}

std::string		Bureaucrat::getName() const
{
	return(_name);
}

int 	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw GradeTooHighException("Cannot increment a bureacrat's grade above 1.");
	_grade--;
	std::cout << getName() << " has been promoted to grade: " << getGrade() << std::endl;
	return ;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw GradeTooLowException("Cannot decrement a bureacrat's grade below 150.");
	_grade++;
	std::cout << getName() << " has been relegated to grade: " << getGrade() << std::endl;
}

void	Bureaucrat::signForm(Form &formObj)
{
	if ((this->getGrade() <= formObj.getSignGrade()))
		std::cout << this->getName() << " has signed document " << formObj.getFormName() << std::endl;
	else
		std::cout << this->getName() << " bureaucrat, grade: " << this->getGrade() << " can't sign form. " << formObj.getFormName() << "form requires " << formObj.getSignGrade() << " or above " << std::endl; 
	return ;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucratObj)
{
    os << bureaucratObj.getName() << " bureacrat grade is: " << bureaucratObj.getGrade();
    return (os);
}
