#include "Brain.hpp"
#include <sstream>

Brain::Brain() :sameBrain(std::rand())
{
	std::cout << "Brain formed" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain died" << std::endl;
}

std::string Brain::identify() const
{
	std::ostringstream sstream;
	sstream << this;

	return sstream.str();
}
