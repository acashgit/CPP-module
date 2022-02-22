#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int	main(void)
{
	ScavTrap scav("Scav1");

	scav.guardGate();
	scav.attack("This one");
	scav.takeDamage(8);
	scav.beRepaired(2);
	scav.attack("And another one");
	scav.takeDamage(8);
	scav.beRepaired(2);
	scav.attack("And another one");
	scav.takeDamage(8);
	scav.beRepaired(2);
	scav.attack("And another one");
	scav.takeDamage(8);
	scav.beRepaired(2);
	scav.attack("And another one");
	scav.takeDamage(8);
	scav.beRepaired(2);
	return (0);
}