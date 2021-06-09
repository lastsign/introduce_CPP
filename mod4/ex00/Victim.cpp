#include "Victim.hpp"

Victim::Victim(const std::string &name) : _name(
		name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim()
{

}

Victim::~Victim()
{
	std::cout << "Vicotim " << _name << " just died for no apparent reason!" << std::endl;}

void Victim::introduce() const
{
	std::cout << "I am " << _name << ", and I like otters!" << std::endl;

}

const std::string &Victim::getName() const
{
	return _name;
}

Victim::Victim(Victim &copy)
{
	*this = copy;
}

Victim &Victim::operator=(const Victim& assign)
{
	_name = assign._name;
	return *this;
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Victim &victim)
{
	victim.introduce();
	return os;
}
