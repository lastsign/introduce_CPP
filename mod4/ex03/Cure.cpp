
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{

}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	*this = copy;
}

AMateria *Cure::clone() const
{
	return new Cure();
}

Cure &Cure::operator=(const Cure &assign)
{
	_xp = assign._xp;
	return *this;
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
