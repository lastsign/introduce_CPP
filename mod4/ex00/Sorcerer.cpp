#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title) : _name(
		name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer()
{}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::introduce() const
{
	std::cout << "I am " << _name << ", " << _title << ", and I like ponies!" << std::endl;

}

const std::string &Sorcerer::getName() const
{
	return _name;
}

const std::string &Sorcerer::getTitle() const
{
	return _title;
}

Sorcerer::Sorcerer(Sorcerer &copy)
{
	*this = copy;
}

Sorcerer &Sorcerer::operator=(const Sorcerer& assign)
{
	_name = assign._name;
	_title = assign._title;
	return *this;
}

void Sorcerer::polymorph(const Victim &victim) const
{
	std::cout << victim.getName() << " has been turned into a cute little sheep!" << std::endl;
}

void Sorcerer::polymorph(const Peon &peon) const
{
	std::cout << peon.getName() << " has been turned into a pink pony!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer)
{
	sorcerer.introduce();
	return os;
}
