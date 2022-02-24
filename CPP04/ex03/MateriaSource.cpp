#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->amount = 0;
	for(int i = 0; i < 4; i++)
		this->sourc[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	this->amount = 0;
	for (int i = 0; i < other.amount; i++)
		this->learnMateria(other.sourc[i]->clone());
	for(int i = 0; i < 4; i++)
		this->sourc[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->amount; i++)
		delete this->sourc[i];
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &other)
{
	for (int i = 0; i < this->amount; i++)
		delete this->sourc[i];
	this->amount = 0;
	for (int i = 0; i < other.amount; i++)
		this->learnMateria(other.sourc[i]->clone());
	for(int i = 0; i < 4; i++)
		this->sourc[i] = NULL;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (this->amount == 4 || m == NULL)
		return;
	for (int i = 0; i < this->amount; i++)
		if (this->sourc[i] == m)
			return;
	this->sourc[this->amount++] = m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for(int i = 0; i < this->amount; i++)
		if (this->sourc[i]->getType() == type)
			return (this->sourc[i]->clone());
	return (NULL);
}