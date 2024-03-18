#include "./include/Bureaucrat.hpp"

int main()
{
	try 
	{
		Form	modulo1("Fusione", 50, 10);	// Documento Fusione, grado di firma 50, grado di messa in atto 10. 
	 	std::cout << modulo1 << std::endl << std::endl;
		Form 	modulo2("Accordo commerciale", 100, 50);
	 	std::cout << modulo2 << std::endl << std::endl;

		Bureaucrat boss("Amministratore delegato", 1);
		std::cout << boss << std::endl << std::endl;
		Bureaucrat operatore1("Risorsa_amministrazione", 50);
		std::cout << operatore1 << std::endl << std::endl;;
		Bureaucrat operatore2("Ultimo arrivato", 100);
		std::cout << operatore2 << std::endl << std::endl;;
		
		modulo1.beSigned(boss);					// Puo firmare, ed è fimato
		boss.signForm(modulo1);
		
		modulo2.beSigned(operatore2);
		operatore2.signForm(modulo2);
		std::cout << std::endl;
		
		modulo1.beSigned(operatore1); 			// Puo firmare ed ma non eseguire, ma è gia firmato quindi non fa niente 
		std::cout << std::endl << std::endl;
		
		modulo1.beSigned(operatore2);			// Non puo ne firmare ne eseguire, quindi stampa che non puo farlo a fine blocco TRY, dopo tutti i distruttori
		std::cout << std::endl << std::endl;
	}
	catch (Form::GradeTooHighException e) 
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException e) 
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
