#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
		Brain *brain;
public:
		Dog();
		Dog(const Dog &old);
		virtual ~Dog();

		Dog		&operator=(const Dog &old);
		virtual void	makeSound(void)const;
		Brain	*getBrain(void) const;
};

#endif