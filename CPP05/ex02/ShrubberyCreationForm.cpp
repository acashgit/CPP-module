#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::name = "Shrubbery Creation";

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form(ShrubberyCreationForm::name, 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &old) : Form(old), target(old.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &old)
{
	(void)old;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::string const shrubName = (this->target + "_shrubbery");
	std::ofstream outfile(shrubName, std::ios::out | std::ios::app);

	if (!outfile.is_open() || outfile.bad())
		throw FileOpenException();
	int treeCount = (rand() % 6) + 1;
	for (int i = 0; i < treeCount; i++)
	outfile << TREE;
	outfile << std::endl;
	outfile.close();
}

const char* ShrubberyCreationForm::FileOpenException::what() const throw()
{
	return "ShrubberyCreationFormException: Cannot open file";
}