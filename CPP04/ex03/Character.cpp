#include "Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
	this->eq = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	// std::cout << "New Character " << this->name << " born!" << std::endl;
}

Character::Character(const Character &other)
{
	this->name = other.name;
	this->eq = other.eq;
	for (int i = 0; i < other.eq; i++)
		this->equip(other.inventory[i]->clone());
	for (int i = other.eq; i < 4; i++)
		this->inventory[i] = NULL;
	// std::cout << "New Character " << this->name << " clon!" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < this->eq; i++)
		delete this->inventory[i];
	// std::cout << "Character " << this->name << " die!" << std::endl;
}

Character	&Character::operator=(Character const &other)
{
	this->name = other.name;
	for (int i = 0; i < this->eq; i++)
		delete this->inventory[i];
	this->eq = other.eq;
	for (int i = 0; i < other.eq; i++)
		this->equip(other.inventory[i]->clone());
	for (int i = other.eq; i < 4; i++)
		this->inventory[i] = NULL;
	// std::cout << "New Character " << this->name << " clon=!" << std::endl;
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	if (this->eq >= 4 || m == NULL)
	{
		std::cout << this->name << ": cant take it" << std::endl;
		return ;
	}
	for (int i = 0; i < this->eq; i++)
	{
		if (this->inventory[i] == m)
		{
			std::cout << this->name << " already have it" << std::endl;
			return ;
		}
	}
	this->inventory[this->eq++] = m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >=this->eq || this->inventory[idx] == NULL)
	{
		std::cout << this->name << ": cant lose it" << std::endl;
		return ;
	}
	for (int i = idx; i < 3; i ++)
	{
		this->inventory[i] = this->inventory[i + 1];
		this->inventory[i + 1] = NULL;
	}
	this->eq--;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >=this->eq || this->inventory[idx] == NULL)
	{
		std::cout << this->name << ": cant lose it" << std::endl;
		return ;
	}
	this->inventory[idx]->use(target);
}