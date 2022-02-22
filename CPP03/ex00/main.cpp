#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("Clap1");
	clap.attack("This one");
	clap.takeDamage(8);
	clap.beRepaired(2);
	clap.attack("And another one");
	clap.takeDamage(8);
	clap.beRepaired(2);
	clap.attack("And another one");
	clap.takeDamage(8);
	clap.beRepaired(2);
	clap.attack("And another one");
	clap.takeDamage(8);
	clap.beRepaired(2);
	clap.attack("And another one");
	clap.takeDamage(8);
	clap.beRepaired(2);
	return (0);
}