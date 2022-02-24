#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
		std::string type;
public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &old);
		virtual ~WrongAnimal();

		std::string	getType(void) const;
		WrongAnimal		&operator=(const WrongAnimal &old);
		void	makeSound(void)const;
};

#endif