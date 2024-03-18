#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
	private:
		std::string const	_formName;
		bool 				_signStatus;
		const int 			_signGrade;
		const int 			_executionGrade;

	public:
		std::string		getFormName() const;
		bool			getSignStatus() const;
		int 			getSignGrade() const;
		int 			getExecutionGrade() const;
		void 			beSigned(Bureaucrat &bureaucratObj);
		virtual void 	execute(Bureaucrat const &executor) const = 0;

		AForm();																// Default costructor 
		AForm(std::string const name, int gradeToSign, int gradeToExecute);		// Custom costructor 
		AForm(const AForm &className);											// Copy costructor 
		AForm &operator=(const AForm &className);								// Copy assigment operator overload
		virtual ~AForm();														// Default destructor
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
		class NotSignedForm : public std::exception
		{
			private:
			std::string		_message;
		public:
			NotSignedForm(std::string msg) : _message(msg) {}
			~NotSignedForm() _NOEXCEPT {};
			std::string	what()
			{
				return (_message);
			}
		};
		class AlreadySignedForm : public std::exception
		{
			private:
			std::string		_message;
		public:
			AlreadySignedForm(std::string msg) : _message(msg) {}
			~AlreadySignedForm() _NOEXCEPT {};
			std::string	what()
			{
				return (_message);
			}
		};
};

std::ostream &operator<<(std::ostream &os, AForm const &obj);

#endif