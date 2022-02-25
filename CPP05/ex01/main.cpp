#include "Bureaucrat.hpp"

int main(void)
{
	Form 		f("formular1", 10, 4);
	Form 		c("formular2", 9, 4);
	Bureaucrat	bob("Bob", 11);
	Bureaucrat	matt("Matt", 9);

	std::cout << f << std::endl;
	std::cout << c << std::endl;
	std::cout << bob << std::endl;
	std::cout << matt << std::endl;
	
	try
	{
		matt.signForm(f);
		bob.incrementGrade();
		bob.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		bob.signForm(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		bob.incrementGrade();
		bob.signForm(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return (0);
}
