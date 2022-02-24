#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *animals[5];

	for (size_t i = 0; i < 5; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout <<  std::endl;
	}
	
	Dog basic;
	{
	Dog tmp = basic;
	std::cout << tmp.getBrain()->getThought() << std::endl;
	std::cout << basic.getBrain()->getThought() << std::endl;
	}
	std::cout << basic.getBrain()->getThought() << std::endl;


	Cat ba;
	Cat clon(ba);

	std::cout << ba.getBrain()->getThought() << std::endl;
	std::cout << clon.getBrain()->getThought() << std::endl;
	std::cout << ba.getBrain()->getThought() << std::endl;
	std::cout << clon.getBrain()->getThought() << std::endl;

	for (size_t i = 0; i < 5; i++)
	{
		delete animals[i];
		std::cout <<  std::endl;
	}
}