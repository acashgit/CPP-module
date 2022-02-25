#ifndef INTERN_HPP
#define INTERN_HPP


# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
		static const std::string forms[3];
		enum types {
			SHURBERRY = 0,
			ROBOTOMY,
			PARDON,
		};
public:
		Intern();
		Intern(Intern const &old);
		virtual ~Intern();

		Intern	&operator=(const Intern &old);
		Form *makeForm(std::string const &formName, std::string const &target) const;

		class FormDoesNotExistException: public std::exception
		{
			virtual const char* what() const throw();
		};
};

#endif