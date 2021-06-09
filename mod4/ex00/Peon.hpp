#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

class Peon : public Victim
{
protected:
	std::string _name;
	Peon();
public:
	Peon(const std::string &name);
	Peon(Peon &copy);
	Peon& operator=(const Peon &assign);
	virtual ~Peon();
	virtual const std::string &getName() const;
};

#endif
