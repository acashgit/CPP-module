#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
		std::string type;
public:
		virtual ~Animal();

		std::string	getType(void) const;
		Animal		&operator=(const Animal &old);
		virtual void	makeSound(void) const = 0;
};

#endif