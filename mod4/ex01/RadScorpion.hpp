#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	virtual ~RadScorpion();
	virtual void takeDamage(int damage);
	RadScorpion(const RadScorpion &copy);
	RadScorpion &operator=(const RadScorpion &assign);
};

#endif
