#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <string>
# include <ostream>
# include <iostream>


class Victim
{
protected:
	std::string _name;
	Victim();
public:
	Victim(const std::string &name);
	Victim(Victim &copy);
	Victim& operator=(const Victim &assign);
	void introduce() const;
	virtual ~Victim();
	virtual const std::string &getName() const;
	void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, const Victim &victim);

#endif
