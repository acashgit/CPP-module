#include <iostream>
#include <string>

class ClapTrap
{
private:
		std::string	name;
		int			hit_points;
		int			en_points;
		int			damage;
public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &clap);
		virtual ~ClapTrap();

		ClapTrap	&operator=(ClapTrap const &clap);
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};
