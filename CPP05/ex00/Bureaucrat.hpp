#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
private:
		Bureaucrat();
		std::string const	name;
		int					grade;
public:
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(const Bureaucrat &old);
		virtual~Bureaucrat();

		Bureaucrat		&operator=(const Bureaucrat &old);
		std::string		const &getName(void) const;
		int				getGrade(void) const;
		void			incrementGrade(void);
		void			decrementGrade(void);

		class GradeTooHighException: public std::exception
		{
			virtual const char * what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			virtual const char * what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in);

#endif