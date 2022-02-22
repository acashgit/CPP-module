#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
		ScavTrap();
public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &scav);
		virtual ~ScavTrap();

		ScavTrap		&operator=(ScavTrap const &scav);
		virtual void	attack(const std::string &target);
		void			guardGate(void);		
};

#endif