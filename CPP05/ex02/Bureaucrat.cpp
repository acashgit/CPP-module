#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name), grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &old) : name(old.name), grade(old.grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat exception: Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat exception: Grade is too low!";
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &old)
{
	this->grade = old.grade;
	return (*this);
}

std::string		Bureaucrat::getName(void) const
{
	return (this->name);
}

int		Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in)
{
	out << in.getName() << ", bureaucrat grade " << in.getGrade() << "." << std::endl;
	return (out);
}

void	Bureaucrat::signForm(Form &form)
{
	if (this->grade <= form.getGradeToSign())
		std::cout << this->getName() << " signs form " << form.getName() << std::endl;
	else
		std::cout << this->getName() << " cannot sign " << form.getName()
		<< " becase his grade too low " << std::endl;
	form.beSigned(*this);	
}

void Bureaucrat::executeForm(Form const & form)
{
	if (!form.isSigned())
	{
		std::cout << this->getName() << " cannot execute " << form
				<< " because the form is unsigned." << std::endl;
	}
	else if (form.getGradeToExecute() < this->grade)
	{
		std::cout << this->getName() << " cannot execute " << form
				<< " because his grade is too low." << std::endl;
	}
	else
	{
		std::cout << *this << " executes " << form << std::endl;
	}
	form.execute(*this);
}