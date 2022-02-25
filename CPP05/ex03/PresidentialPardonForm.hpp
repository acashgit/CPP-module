#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"


class PresidentialPardonForm : public Form
{
private:
		PresidentialPardonForm();
		static std::string const name;
		std::string const target;
public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &old);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm	&operator=(const PresidentialPardonForm &old);
		void	execute(Bureaucrat const &executor) const;
};

#endif