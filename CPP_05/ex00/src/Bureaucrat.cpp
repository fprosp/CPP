#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Defautl costructor call" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade):_name(name)
{
	std::cout << "Custom costructor call" << std::endl;
	if (grade < 1)
		throw GradeTooHighException("Grade must be upper to 1 ");
	if (grade > 150)
		throw GradeTooHighException("Grade must be less to 150");
	_grade = grade;
	std::cout << getName() << "has been hired " << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &className):_name(className._name)
{
	std::cout << "Copy constructor call" << std::endl;
	_grade = className._grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &className)
{
	std::cout << "Copy assigment operator overload called." << std::endl;
	_grade = className._grade;
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
	if (_grade == 1)
		throw GradeTooHighException("1 is the highest possible grade.");
	_grade--;
	std::cout << getName() << " new grade is " << getGrade() << std::endl;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw GradeTooLowException("150 is the lowest possible grade.");
	_grade++;
	std::cout << getName() << " new grade is " << getGrade() << std::endl;
}

std::ostream &operator <<(std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureacrat grade " << obj.getGrade();
    return (os);
}
