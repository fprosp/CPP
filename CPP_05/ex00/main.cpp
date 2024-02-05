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
	std::cout << std::endl;
	try 
	{
		std::cout << "Antonio Pupa is going to have an interview." <<std::endl;
		Bureaucrat officeBoy("Antonio Pupa", 149);
		std::cout << officeBoy << std::endl;
		officeBoy.decrementGrade();
		officeBoy.decrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException e) 
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e) 
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try 
	{
		std::cout << "Giusto is going to have an interview." <<std::endl;
		Bureaucrat Superqualificato("Giusto", 0);
		std::cout << Superqualificato << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException e) 
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e) 
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try 
	{
		std::cout << "Ignazio is going to have an interview." <<std::endl;	
		Bureaucrat newbie("Ignazio", 189);
		std::cout << newbie << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException e) 
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e) 
	{
		std::cout << e.what() << std::endl;
	}
	return (0);

}