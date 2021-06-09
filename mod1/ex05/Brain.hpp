#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
public:
	Brain();
	~Brain();
	std::string identify() const;
private:
	int sameBrain;
};

#endif // !BRAIN_HPP

