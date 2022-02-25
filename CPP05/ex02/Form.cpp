#include "Form.hpp"

Form::Form(std::string const &name, int n_sig, int n_exec) : name(name), issigned(false), need_grade_sig(n_sig), need_grade_exec(n_exec)
{
	if (this->need_grade_exec < 1 || this->need_grade_sig < 1)
		throw Form::GradeTooHighException();
	if (this->need_grade_exec > 150 || this->need_grade_sig > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &old) : name(old.name), issigned(old.issigned), need_grade_sig(old.need_grade_sig), need_grade_exec(old.need_grade_exec)
{
	if (this->need_grade_exec < 1 || this->need_grade_sig < 1)
		throw Form::GradeTooHighException();
	if (this->need_grade_exec > 150 || this->need_grade_sig > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Ford exception: Grade is too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Ford exception: Grade is too low!";
}

const char* Form::SignedFormException::what() const throw()
{
	return "FormException: Form already signed";
}

const char* Form::UnSignedFormException::what() const throw()
{
	return "FormException: Form not signed!";
}

Form	&Form::operator=(Form const &old)
{
	this->issigned = old.issigned;
	return (*this);
}

std::string	const	&Form::getName(void) const
{
	return (this->name);
}

bool		Form::isSigned(void) const
{
	return (this->issigned);
}

int			Form::getGradeToSign(void) const
{
	return (this->need_grade_sig);
}

int			Form::getGradeToExecute(void) const
{
	return (this->need_grade_exec);
}

void		Form::beSigned(Bureaucrat &bur)
{
	if (this->need_grade_sig < bur.getGrade())
		throw Form::GradeTooLowException();
	if (this->issigned)
		throw Form::SignedFormException();
	this->issigned = true;
}

std::ostream &operator<<(std::ostream &out, Form const &in)
{
	out << "Form " << in.getName() << " with grade to sign " << in.getGradeToSign()
	<< " and grade to execute " << in.getGradeToExecute() << " is ";
	if (in.isSigned())
		out << "signed.";
	else
		out << "not signed.";
	out << std::endl;
	return (out);
}

void Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->need_grade_exec)
		throw Form::GradeTooLowException();
	if (!this->issigned)
		throw Form::UnSignedFormException();
}