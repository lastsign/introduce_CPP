#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator : public ISpaceMarine
{
private:
	int _id;
public:
	ISpaceMarine *clone() const;
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &copy);
	AssaultTerminator &operator=(const AssaultTerminator &assign);
	~AssaultTerminator();
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
