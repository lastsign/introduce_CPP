#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <ostream>
# include "ISquad.hpp"

class Squad : public ISquad
{
private:
	struct singleNode
	{
		ISpaceMarine *unit;
		singleNode *next;
		singleNode();
		singleNode(ISpaceMarine *unit, singleNode *next);
	};
	singleNode *_head;
public:
	Squad();
	Squad(const Squad &copy);
	Squad &operator=(const Squad &assign);
	~Squad();
	ISpaceMarine *getUnit(int i) const;
	int getCount() const;
	int push(ISpaceMarine *marine);
};

#endif
