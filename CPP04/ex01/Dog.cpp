#include "Dog.hpp"


Dog::Dog()
{
	this->type = std::string("Dog");
	this->brain = new Brain(this->type);
	std::cout << "New " << this->type << " Created" << std::endl;
}

Dog::Dog(Dog const &old)
{
	this->type = old.type;
	this->brain = new Brain(*old.getBrain());
	std::cout << "New " << this->type << " Created clon" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "this " << this->type<< " die" << std::endl;
}

Dog	&Dog::operator=(Dog const &old)
{
	this->type = old.type;
	this->brain = new Brain(*old.getBrain());
	std::cout << "New " << this->type << " Created clon" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "AufAuf" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}