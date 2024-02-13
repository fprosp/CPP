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
			public:
				virtual const char *what() const throw()
				{
					return ("Grade too high. The Bureaucrat could have 1 or lower point.");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade too low. The Bureaucrat could have a level 150 or upper");
				}
		};
};




std::ostream &operator <<(std::ostream &os, const Bureaucrat &obj);

#endif