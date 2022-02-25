#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

#define TREE "         *\n" \
"        /|\\\n"\
"       /*|O\\\n"\
"      /*/|\\*\\\n"\
"     /X/O|*\\X\\\n"\
"    /*/X/|\\X\\*\\\n"\
"   /O/*/X|*\\O\\X\\\n"\
"  /*/O/X/|\\X\\O\\*\\\n"\
" /X/O/*/X|O\\X\\*\\O\\\n"\
"/O/X/*/O/|\\X\\*\\O\\X\\\n"\
"        |X|\n"\
"        |X|\n"

class ShrubberyCreationForm : public Form
{
private:
		ShrubberyCreationForm();
		static std::string const name;
		std::string const target;
public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &old);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &old);
		void	execute(Bureaucrat const &executor) const;

		class FileOpenException: public std::exception 
		{
			virtual const char* what() const throw();
		};
		
};

#endif