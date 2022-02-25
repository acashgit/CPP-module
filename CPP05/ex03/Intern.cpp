#include "Intern.hpp"

const std::string Intern::forms[3] = {
	"Shrubbery creation",
	"Robotomy request",
	"Presidential pardon"
};

Intern::Intern()
{
}

Intern::Intern(Intern const &old)
{
	(void)old;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &old)
{
	(void)old;
	return (*this);
}

const char *Intern::FormDoesNotExistException::what() const throw()
{
	return "Intern exception: Wrong Form!";
}

Form *Intern::makeForm(std::string const &formName, std::string const &target) const
{
	int	form_type = -1;
	for (int i = SHURBERRY; i <= PARDON; i++)
	{
		if (formName == forms[i])
			form_type = i;
	}
	switch (form_type)
	{
		case SHURBERRY:
			std::cout << "Intern creates " << forms[form_type] << std::endl;
			return (new ShrubberyCreationForm(target));
			break;
		case ROBOTOMY:
			std::cout << "Intern creates " << forms[form_type] << std::endl;
			return (new RobotomyRequestForm(target));
			break;
		case PARDON:
			std::cout << "Intern creates " << forms[form_type] << std::endl;
			return (new PresidentialPardonForm(target));
			break;
		default:
			throw FormDoesNotExistException();
			break;
	}
}