#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
		Brain *brain;
public:
		Cat();
		Cat(const Cat &old);
		virtual ~Cat();

		Cat		&operator=(const Cat &old);
		virtual void	makeSound(void)const;
		Brain	*getBrain(void) const;
};

#endif