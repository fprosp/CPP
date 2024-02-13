#include "./include/Bureaucrat.hpp"

int main()
{
	try 
	{
		std::cout << "Luigi capello is going to have an interview." <<std::endl;
		Bureaucrat boss("Luigi capello ", 2); //Il distruttore si attiva al termine del blocco try (lo scope di boss), quindi prima che l'eccezione si attivi 
		std::cout << boss << std::endl;
		boss.incrementGrade();
		boss.incrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e) 
	{
		std::cout << e.what() << std::endl;
	}
	}