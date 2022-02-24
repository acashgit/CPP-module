#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
		Character();
		std::string name;
		int eq;
		AMateria	*inventory[4];
public:
		Character(std::string name);
		Character(const Character &other);
		virtual ~Character();

		Character		&operator=(const Character &old);
		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif