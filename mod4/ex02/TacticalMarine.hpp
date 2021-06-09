#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"
# include <iostream>

class TacticalMarine : public ISpaceMarine
{
private:
	std::string _name;
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &copy);
	TacticalMarine &operator=(const TacticalMarine &assign);
	~TacticalMarine();
	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};



#endif
