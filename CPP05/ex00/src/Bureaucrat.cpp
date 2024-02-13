#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("Francesco")
{
	_grade = 150;
	std::cout << getName() << "has been hired." << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade):_name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooHighException();
	_grade = grade;
	std::cout << getName() << " has been hired with grade: " << getGrade() << std::endl;
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
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
	std::cout << getName() << " has been promoted to grade: " << getGrade() << std::endl;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
	std::cout << getName() << " has been relegated to grade: " << getGrade() << std::endl;
}

std::ostream &operator <<(std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureacrat grade is: " << obj.getGrade();
    return (os);
}
