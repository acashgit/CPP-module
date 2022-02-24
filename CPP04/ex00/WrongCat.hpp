#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
		WrongCat();
		WrongCat(const WrongCat &old);
		virtual ~WrongCat();

		WrongCat		&operator=(const WrongCat &old);
		void	makeSound(void)const;
};

#endif