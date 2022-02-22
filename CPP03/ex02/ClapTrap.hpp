#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
		ClapTrap();
		std::string	name;
		int			hit_points;
		int			en_points;
		int			damage;
public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &clap);
		virtual ~ClapTrap();

		ClapTrap		&operator=(ClapTrap const &clap);
		virtual void	attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif