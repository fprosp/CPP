#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;

	public:
		RobotomyRequestForm();																						// Standard costructor	
		RobotomyRequestForm(std::string target);																	// 1 custom costructor
		RobotomyRequestForm(std::string target, int gradeToSign, int gradeToExecute);								// 2 Custom costructor 
		RobotomyRequestForm(const RobotomyRequestForm &original) ;													// Copy costructor
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);											// Assigment operator overload 
		~RobotomyRequestForm();																						// Destructor
		
		void	execute(Bureaucrat const &bureaucratObj) const;
};

#endif
