#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
public:
		Cat();
		Cat(const Cat &old);
		virtual ~Cat();

		Cat		&operator=(const Cat &old);
		virtual void	makeSound(void)const;
};

#endif