#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <string>
# include <ostream>
# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer
{
protected:
	std::string _name;
	std::string _title;
	Sorcerer();
public:
	Sorcerer(const std::string &name, const std::string &title);
	Sorcerer(Sorcerer &copy);
	Sorcerer& operator=(const Sorcerer &assign);
	void introduce() const;
	virtual ~Sorcerer();
	void polymorph(Victim const &) const;
	void polymorph(Peon const &) const;
	const std::string &getName() const;
	const std::string &getTitle() const;
};

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer);

#endif
