
#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():_target("From"), AForm("Default_form", 150, 150)                                     // Default costructor
{
	std::cout << "Default ShruberryCreationForm creation." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _target(target), AForm("Default_RShrubberyCreationForm", 150, 150)					// 1 custom costructor
{
	std::cout << "ShrubberyCreationForm document with custom values creation." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target, int gradeToSign, int gradeToExecute):_target(target), AForm("ShrubberyCreationForm", gradeToSign, gradeToExecute)
{
	std::cout << "ShruberyCrationForm document created." << std::endl;
}
	
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &original) : _target(original._target), AForm(original)    // Copy costructor
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)                                         // Copy assigment operator
{
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShruberryCreationsForm destruction." << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &bureaucratObj) const
{
	if (getSignStatus() != true)
		throw NotSignedForm(getFormName() + " did not recived sign. Any form need to be signed before the execution");
    if (bureaucratObj.getGrade() > getExecutionGrade())
        throw GradeTooLowException(bureaucratObj.getName() + " grade is too low to execute form" + getFormName());
    std::ofstream   file;
    file.open(_target + "_shrubbery");
    if (file.is_open())
    {
        file << "    _\\/_\n";
        file << "     /\\\n";
        file << "     /\\\n";
        file << "    /  \\\n";
        file << "    /~~\\o\n";
        file << "   /o   \\\n";
        file << "  /~~*~~~\\\n";
        file << " o/    o \\\n";
        file << " /~~~~~~~~\\~`\n";
        file << "/__*_______\\\n";
        file << "     ||\n";
        file << "   \\====/\n";
        file << "    \\__/" << std::endl;

        if (!file.good())
            std::cerr << "Writing error" << std::endl;
        file.close();
        std::cout << "A tree has been planted" << std::endl;
    }
    else
        std::cerr << "Unable to open file" << std::endl;
}
