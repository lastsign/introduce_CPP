#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_mate[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	MateriaSource &operator=(const MateriaSource &assign);
	void learnMateria(AMateria *materia);
	AMateria *createMateria(const std::string &type);
	virtual ~MateriaSource();
};

#endif
