#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
		int	amount;
		AMateria *sourc[4];
public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		virtual ~MateriaSource();

		MateriaSource		&operator=(const MateriaSource &old);
		void	learnMateria(AMateria *m);
		AMateria* createMateria(std::string const &type);

};

#endif