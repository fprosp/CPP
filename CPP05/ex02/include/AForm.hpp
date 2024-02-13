#ifndef AFORM_HPP
# define AFORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm // CLASSE ASTRATTA
{
	private:
		std::string const	_formName;
		bool 				_signStatus;
		const int 			_signGrade;
		const int 			_executionGrade;
	public:
		AForm();																// Default costructor 
		virtual ~AForm();														// Default destructor
		AForm(std::string const name, int gradeToSign, int gradeToExecute);		// Custom costructor 
		AForm(const AForm &className);											// Copy costructor 
		AForm &operator=(const AForm &className);								// Copy assigment operator overload

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

std::ostream &operator<<(std::ostream &os, AForm const &obj);

#endif