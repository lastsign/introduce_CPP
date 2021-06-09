#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class Phonebook
{
private:
	unsigned int _contactCount;
	unsigned int _requiredField;
	Contact _contacts[8];
public:
	Phonebook();
	void getField();
	void setField();
	void clear(Contact &contact);
	void printTable(Contact contact, int index);
	void printContact(Contact contact);
	std::string gettingField(std::string message, std::string isRequired);
	int requestIndex();
};

#endif
