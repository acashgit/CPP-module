#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{

}

Ice::Ice(const Ice &other): AMateria("ice")
{
	this->type = other.type;
}

Ice::~Ice()
{
}

Ice	&Ice::operator=(Ice const &other)
{
	this->type = other.type;
	return (*this);
}

AMateria *Ice::clone(void)const
{
	Ice *tmp = new Ice(*this);
	return(tmp);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an " << this->type << " bolt at " << target.getName() << " *" << std::endl;
}