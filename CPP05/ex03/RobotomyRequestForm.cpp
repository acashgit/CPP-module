#include "RobotomyRequestForm.hpp"

std::string const RobotomyRequestForm::name = "Robotomy Request";

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(RobotomyRequestForm::name, 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &old) : Form(old), target(old.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &old)
{
	(void)old;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << " Drrrrr Drrrrr Drrrrrrr ..." << std::endl;
	if (rand() % 2)
		std::cout << "Done! " << this->target << " become a Robot!" << std::endl;
	else
		std::cout << "Fail! " << this->target << " is invalid" << std::endl;
}
