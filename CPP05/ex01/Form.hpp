#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
class Form;
#include "Bureaucrat.hpp"

class Form
{
private:
		Form();
		std::string const name;
		bool	issigned;
		int const need_grade_sig;
		int const need_grade_exec;
public:
		Form(std::string const &name, int n_sig, int n_exec);
		Form(const Form &old);
		virtual ~Form();

		Form		&operator=(const Form &old);
		std::string	const &getName(void) const;
		bool		isSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		void		beSigned(Bureaucrat &bur);

		class GradeTooHighException: public std::exception
		{
			virtual const char * what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			virtual const char * what() const throw();
		};
		class SignedFormException: public std::exception
		{
			virtual const char * what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Form const &in);

#endif