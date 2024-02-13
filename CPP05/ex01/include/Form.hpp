#ifndef FORM_HPP
# define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_formName;
		bool 				_signStatus;
		const int 			_signGrade;
		const int 			_executionGrade;
	public:
		Form();																	// Default costructor 
		Form(std::string const name, int gradeToSign, int gradeToExecute);		// Custom costructor 
		Form(const Form &className);											// Copy costructor 
		Form &operator=(const Form &className);									// Copy assigment operator overload
		~Form();																// Default destructor

		std::string getFormName() const;
		bool		getSignStatus() const;
		int 		getSignGrade() const;
		int 		getExecutionGrade() const;
		void 		beSigned(Bureaucrat &bureaucratObj);

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

std::ostream &operator<<(std::ostream &os, Form const &obj);

#endif