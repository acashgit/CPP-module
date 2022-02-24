#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
protected:
		std::string ideas[100];
public:
		Brain();
		Brain(std::string type);
		Brain(const Brain &old);
		virtual ~Brain();

		Brain		&operator=(const Brain &old);
		const std::string	getThought(void) const;
};

#endif