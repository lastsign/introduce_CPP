#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	virtual ~SuperMutant();
	void takeDamage(int damage);
	SuperMutant(const SuperMutant &copy);
	SuperMutant &operator=(const SuperMutant &assign);
};
#endif
