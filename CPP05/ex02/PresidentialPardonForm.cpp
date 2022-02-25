#include "PresidentialPardonForm.hpp"

std::string const PresidentialPardonForm::name = "Presidential Pardon";

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form(PresidentialPardonForm::name, 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &old) : Form(old), target(old.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &old)
{
	(void)old;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" <<std::endl;
}