#include <clocale>
#include "Squad.hpp"

ISpaceMarine *Squad::getUnit(int i) const
{
	singleNode *cur = _head;
	while (i > 0 && cur)
	{
		cur = cur->next;
		i--;
	}
	return cur->unit;
}

int Squad::getCount() const
{
	int i = 0;
	singleNode *cur = _head;
	while (cur)
	{
		i++;
		cur = cur->next;
	}
	return i;
}

int Squad::push(ISpaceMarine *marine)
{
	if (!_head)
	{
		_head = new singleNode(marine, nullptr);
		return 1;
	}
	else
	{
		int i = 1;
		singleNode *cur = _head;
		while (cur->next)
		{
			cur = cur->next;
			i++;
		}
		cur->next = new singleNode(marine, nullptr);
		return i;
	}
}

Squad::Squad()
{
	_head = nullptr;
}

Squad::Squad(const Squad &copy)
{
	*this = copy;
}

Squad &Squad::operator=(const Squad &assign)
{
	//TODO copy-and-swap
	Squad::~Squad();
	singleNode *temp = assign._head;
	while (temp)
	{
		Squad::push(temp->unit->clone());
		temp = temp->next;
	}
	return *this;
}

Squad::~Squad()
{
	singleNode *cur = _head;
	while (cur)
	{
		_head = cur->next;
		delete cur->unit;
		delete cur;
		cur = _head;
	}
}

Squad::singleNode::singleNode()
{
	unit = nullptr;
	next = nullptr;
}

Squad::singleNode::singleNode(ISpaceMarine *unit, Squad::singleNode *next)
		: unit(unit), next(next)
{}
