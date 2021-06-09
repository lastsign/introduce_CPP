#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

const std::string zombieTypes[4] = {
	"child",
	"adutl woman",
	"adult man",
	"your grandpa"
};

const std::string zombieNames[4] = {
	"Alex",
	"Gloria",
	"Marty",
	"Melman"
};

class Zombie
{
private:
	std::string type;
	std::string name;
public:
	Zombie();
	Zombie(std::string type, std::string name);
	~Zombie();
	void announce();
};

#endif // !ZOMBIE_HPP