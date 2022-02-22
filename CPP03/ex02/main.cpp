#include "FragTrap.hpp"

int	main(void)
{
	FragTrap frag("Frag1");

	frag.attack("tiny guy");
	frag.highFivesGuys();
	frag.takeDamage(5);
	frag.beRepaired(3);
	return (0);
}