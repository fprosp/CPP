#include "./include/Bureaucrat.hpp"
#include "./include/AForm.hpp"
#include "./include/PresidentialPardonForm.hpp"
#include "./include/Intern.hpp"

int main()
{
	try 
	{
		Intern someRandomIntern;
		AForm *rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		PresidentialPardonForm	modulo1("Fusione", 50, 10);
	 	// std::cout << modulo1 << std::endl;

		// PresidentialPardonForm 	modulo2("Accordo commerciale", 100, 50);
	 	// std::cout << modulo2 << std::endl << std::endl;

		Bureaucrat boss("Amministratore delegato", 1);
		// std::cout << boss << std::endl;

		modulo1.beSigned(boss);					// Puo firmare ed eseguire, ed è fimato
		boss.signForm(modulo1);					// Puo firmare ed ma non eseguire, ma è gia firmato quindi non fa niente 
		modulo1.execute(boss);

	}
	catch (AForm::GradeTooHighException e) 
	{
		std::cout << e.what() << std::endl;
	}
	catch (AForm::GradeTooLowException e) 
	{
		std::cout << e.what() << std::endl;
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
