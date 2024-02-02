#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <string>
#include <iostream>

class Bureaucrat
{
	private:
		std::string const 	_name;
		int 				_grade;
	public:
		Bureaucrat();											// Default costructor
		Bureaucrat(std::string const name, int grade);			// Custom costructor
		Bureaucrat(const Bureaucrat &className);				// Copy constructor
		Bureaucrat &operator=(const Bureaucrat &className);		// Copy Assignment operator overload 
		~Bureaucrat();											// Default destructor 

		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		class GradeTooHighException : public std::exception
		{
			private:
				std::string		_message;
			public:
				GradeTooHighException(std::string msg) : _message(msg) {} 
				std::string	what()										 
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
				std::string	what()
				{
					return (_message);
				}
		};
};

#endif