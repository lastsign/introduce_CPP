#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	static const int incrXP = 10;
	std::string _type;
	unsigned int _xp;
public:
	AMateria();
	AMateria(const AMateria &copy);
	AMateria &operator=(const AMateria &assign);
	AMateria(std::string const & type);
	virtual ~AMateria();
	std::string const & getType() const;
	unsigned int getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
