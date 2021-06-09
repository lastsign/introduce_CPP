#include "Peon.hpp"

Peon::Peon(const std::string &name) : Victim(name)
{
	_name = Victim::getName();
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

const std::string &Peon::getName() const
{
	return _name;
}

Peon &Peon::operator=(const Peon &assign)
{
	_name = assign._name;
	return *this;
}

Peon::Peon(Peon &copy)
{
	*this = copy;
}

Peon::Peon()
{
}
