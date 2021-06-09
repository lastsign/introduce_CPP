#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	AMateria *_mate[4];
public:
	Character();
	Character(const Character &copy);
	Character &operator=(const Character &assign);
	Character(std::string const &name);
	~Character();
	const std::string &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif
