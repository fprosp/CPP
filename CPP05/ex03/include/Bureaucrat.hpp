#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <fstream>

class AForm;
class Bureaucrat
{
	private:
		std::string const 	_name;
		int 				_grade;

	public:
		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		void		signForm(AForm &formObj);
		void 		executeForm(AForm const &formObj);
		
		Bureaucrat();											// Default costructor
		Bureaucrat(std::string const name, int grade);			// Custom costructor
		Bureaucrat(const Bureaucrat &className);				// Copy constructor
		Bureaucrat &operator=(const Bureaucrat &className);		// Copy Assignment operator overload 
		~Bureaucrat();											// Default destructor 
		class GradeTooHighException : public std::exception
		{
			private:
				std::string		_message;
			public:
				GradeTooHighException(std::string msg) : _message(msg) {}
				~GradeTooHighException() _NOEXCEPT {};
				const std::string	what()
				{	
					return (_message);
				}
		};
		class GradeTooLowException : public std::exception
		{
			private:
				std::string		_message;
			public:
				GradeTooLowException(std::string msg) : _message(msg) {}
				~GradeTooLowException() _NOEXCEPT {};
				std::string	what()
				{
					return (_message);
				}
		};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &obj);

#endif
