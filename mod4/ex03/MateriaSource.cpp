#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria *materia)
{
	int i = 0;
	while (_mate[i])
		i++;
	if (i >= 0 && i <= 3)
		_mate[i] = materia->clone();
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; ++i)
		if (_mate[i] && _mate[i]->getType() == type)
			return _mate[i]->clone();
	return nullptr;
}

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		_mate[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		delete _mate[i];
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &assign)
{
	if (this != &assign)
	{
		for (int i = 0; i < 4; ++i)
			delete _mate[i];
		for (int i = 0; i < 4; ++i)
			_mate[i] = assign._mate[i]->clone();
	}
	return *this;
}
