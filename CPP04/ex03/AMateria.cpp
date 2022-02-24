#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	// std::cout << "Materia " << type << " created!" << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "this " <<  "AMateria" << " die" << std::endl;
}

std::string	const &AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::use (ICharacter& target)
{
	std::cout << "Use " << this->type << " into " << target.getName() << std::endl;
}