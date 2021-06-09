#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();

	Cure(const Cure &copy);
	Cure &operator=(const Cure &assign);
	AMateria *clone() const;
	virtual ~Cure();
	void use(ICharacter &target);
};

#endif
