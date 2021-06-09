#include "Ice.hpp"

AMateria *Ice::clone() const
{
	return new Ice();
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	*this = copy;
}

Ice::Ice() : AMateria("ice")
{}

Ice::~Ice()
{

}

Ice &Ice::operator=(const Ice &assign)
{
	_xp = assign._xp;
	return *this;
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
