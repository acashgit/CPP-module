#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
public:
		Dog();
		Dog(const Dog &old);
		virtual ~Dog();

		Dog		&operator=(const Dog &old);
		virtual void	makeSound(void)const;
};

#endif