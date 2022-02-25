#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


#include "Form.hpp"


class RobotomyRequestForm : public Form
{
private:
		RobotomyRequestForm();
		static std::string const name;
		std::string const target;
public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &old);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm	&operator=(const RobotomyRequestForm &old);
		void	execute(Bureaucrat const &executor) const;
};

#endif