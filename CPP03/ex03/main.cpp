#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap diamond("Diamond1");

	diamond.whoAmI();
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.attack("sm one");
	diamond.takeDamage(5);
	diamond.beRepaired(3);
	return (0);
}