#include "AMateria.hpp"

AMateria::AMateria() : _type(), _xp()
{

}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &assign)
{
	_xp = assign._xp;
	_type = assign._type;
	return *this;
}

AMateria::AMateria(const std::string &type) : _type(type), _xp(0)
{
}

AMateria::~AMateria()
{

}

std::string const &AMateria::getType() const
{
	return _type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}

void AMateria::use(ICharacter &target)
{
	target.getName();
	_xp += incrXP;
}
