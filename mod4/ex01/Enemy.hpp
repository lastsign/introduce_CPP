#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>
# include <string>

class Enemy
{
protected:
	int _hp;
	std::string _type;
	Enemy();
public:
	Enemy(int hp, std::string const &type);
	Enemy(const Enemy &copy);
	Enemy &operator=(const Enemy &assign);
	virtual ~Enemy();
	int getHp() const;
	const std::string &getType() const;
	virtual void takeDamage(int damage);
};

#endif
