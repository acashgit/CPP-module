#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name)
{
	std::cout << "ClapTrap " << this->name << " is here" << std::endl;
	this->hit_points = 10;
	this->en_points = 10;
	this->damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &clap)
{
	std::cout << "ClapTrap " << clap.name <<" is here, but cloned" << std::endl;
	this->name = clap.name;
	this->hit_points = clap.hit_points;
	this->en_points = clap.en_points;
	this->damage = clap.damage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " is gone" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &clap)
{
	std::cout << "ClapTrap " << clap.name <<" is here, but assig" << std::endl;
	this->name = clap.name;
	this->hit_points = clap.hit_points;
	this->en_points = clap.en_points;
	this->damage = clap.damage;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->en_points > 0 && this->hit_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->damage << " points of damage!" << std::endl;
		this->en_points--;
	}
	else if (this->hit_points <= 0)
		std::cout << "Claptrap " << this->name << " cant attack" << " dead(" << std::endl;
	else
		std::cout << "Claptrap " << this->name << " cant attack" << " tired" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= amount;
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout << "Claptrap " << this->name << " take " << amount << " damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->en_points > 0 && this->hit_points > 0)
	{
		this->hit_points += amount;
		this->en_points--;
		if (this->hit_points > 10)
			this->hit_points = 10;
		std::cout << "Claptrap " << this->name << " heal " << amount << " health!" << std::endl;
	}
	else if (this->hit_points <= 0)
		std::cout << "Claptrap " << this->name << " cant repair" << " dead(" << std::endl;
	else
		std::cout << "Claptrap " << this->name << " cant repair" << " tired" << std::endl;
}