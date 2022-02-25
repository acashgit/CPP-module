#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Intern intern;
	Form* rrf;
	Bureaucrat bobster("bobster", 1);
	try
	{
		rrf = intern.makeForm("Presidential pardon", "Bender");
		bobster.signForm(*rrf);
		bobster.executeForm(*rrf);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete rrf;
	return (0);
}
