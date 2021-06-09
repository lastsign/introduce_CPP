#include "Human.hpp"

Human::Human()
{
	std::cout << "Human said: \"I born\"" << std::endl;
}

Human::~Human()
{
	std::cout << "Human died" << std::endl;
}

std::string Human::identify() const
{
	return brain.identify();
}

const Brain& Human::getBrain() const
{
	return brain;
}
