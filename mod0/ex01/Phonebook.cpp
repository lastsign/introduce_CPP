/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:30:00 by ptycho            #+#    #+#             */
/*   Updated: 2021/04/23 12:30:00 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <limits>

void Phonebook::getField()
{
	std::string str, answer;
	while (1 != 0)
	{
		std::cout << "You can use commands: ADD, SEARCH and EXIT" << std::endl;
		std::getline(std::cin,str);
		if (!std::cin.eof())
		{
			if (str == "ADD")
			{
				if (_contactCount == 8)
					std::cout << "Phonebook is full, sorry." << std::endl;
				else
				{
					setField();
					if (_requiredField != 5)
					{
						if (_requiredField == 4)
							std::cout << "Some field hasn't filled" << std::endl;
						else if (_requiredField < 4)
							std::cout << "Some fields hasn't filled" << std::endl;
						clear(_contacts[_contactCount]);
					}
					else
					{
						_requiredField = 0;
						std::cout << "Contact created" << std::endl;
						_contactCount++;
					}
				}
			}
			else if (str == "SEARCH")
			{
				if (_contactCount > 0)
				{
					std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|"
					<< std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << "|" << std::endl;
					for (size_t i = 0; i < _contactCount; ++i)
						printTable(_contacts[i], static_cast<int>(i));
					std::cout << "Choose contact by index" << std::endl;
					while (requestIndex())
						NULL;
				}
				else
					std::cout << "Phonebook is empty" << std::endl;
			}
			else if (str == "EXIT")
				exit(0);
		}
		else
			exit(0);
	}
}

Phonebook::Phonebook()
{
	_contactCount = 0;
	_requiredField = 0;
}

std::string Phonebook::gettingField(std::string message, std::string isRequired)
{
	std::string answer;
	std::cout << message << std::endl;
	getline(std::cin, answer);
	if (std::cin.eof())
		exit(0);
	if (isRequired == "*" && !answer.empty())
		_requiredField++;
	return answer;
}

void Phonebook::setField()
{
	std::string answer;
	std::cout << "Fields with '*' are required" << std::endl;
	answer = gettingField("* Enter your first name", "*");
	_contacts[_contactCount].setFirstName(answer);
	answer = gettingField("* Enter your last name", "*");
	_contacts[_contactCount].setLastName(answer);
	answer = gettingField("* Enter your nickname", "*");
	_contacts[_contactCount].setNickname(answer);
	answer = gettingField("Enter your login", "");
	_contacts[_contactCount].setLogin(answer);
	answer = gettingField("Enter your postal address", "");
	_contacts[_contactCount].setPostalAddress(answer);
	answer = gettingField("* Enter your email address", "*");
	_contacts[_contactCount].setEmailAddress(answer);
	answer = gettingField("* Enter your phone number", "*");
	_contacts[_contactCount].setPhoneNumber(answer);
	answer = gettingField("Enter your birthday date", "");
	_contacts[_contactCount].setBirthdayDate(answer);
	answer = gettingField("Enter your favorite meal", "");
	_contacts[_contactCount].setFavoriteMeal(answer);
	answer = gettingField("Enter your underwear color", "");
	_contacts[_contactCount].setUnderwearColor(answer);
	answer = gettingField("Enter your darkest secret", "");
	_contacts[_contactCount].setDarkestSecret(answer);
}

void Phonebook::clear(Contact &contact)
{
	contact.setFirstName("");
	contact.setLastName("");
	contact.setNickname("");
	contact.setLogin("");
	contact.setPostalAddress("");
	contact.setEmailAddress("");
	contact.setPhoneNumber("");
	contact.setBirthdayDate("");
	contact.setFavoriteMeal("");
	contact.setUnderwearColor("");
	contact.setDarkestSecret("");
}

void Phonebook::printTable(Contact contact, int index)
{
	std::string field;
	std::cout << "|" << std::setw(10) << index << "|";
	field = contact.getFirstName();
	if (field.length() <= 10)
		std::cout << std::setw(10) << field << "|";
	else
		std::cout << std::setw(9) << field.substr(0, 9) << ".|";
	field = contact.getLastName();
	if (field.length() <= 10)
		std::cout << std::setw(10) << field << "|";
	else
		std::cout << std::setw(9) << field.substr(0, 9) << ".|";
	field = contact.getNickname();
	if (field.length() <= 10)
		std::cout << std::setw(10) << field << "|";
	else
		std::cout << std::setw(9) << field.substr(0, 9) << ".|";
	std::cout << std::endl;
}

void Phonebook::printContact(Contact contact)
{
	std::string field;

	field = contact.getFirstName();
	std::cout << "Fist name: " << field << std::endl;
	field = contact.getLastName();
	std::cout << "Last name: " << field << std::endl;
	field = contact.getNickname();
	std::cout << "Nickname: " << field << std::endl;
	field = contact.getLogin();
	std::cout << "Login: " << field << std::endl;
	field = contact.getPostalAddress();
	std::cout << "Postal address: " << field << std::endl;
	field = contact.getEmailAddress();
	std::cout << "Email address: " << field << std::endl;
	field = contact.getPhoneNumber();
	std::cout << "Phone number: " << field << std::endl;
	field = contact.getBirthdayDate();
	std::cout << "Birthday date: " << field << std::endl;
	field = contact.getFavoriteMeal();
	std::cout << "Favorite meal: " << field << std::endl;
	field = contact.getUnderwearColor();
	std::cout << "Underwear color: " << field << std::endl;
	field = contact.getDarkestSecret();
	std::cout << "Darkest secret: " << field << std::endl;
}

int Phonebook::requestIndex()
{
	std::string str;
	std::getline(std::cin,str);
	if (!std::cin.eof())
	{
		if (str >= "0" && str <= "7" && static_cast<int>(str[0]) - '0' <= static_cast<int>(_contactCount - 1))
		{
			printContact(_contacts[static_cast<int>(str[0]) - '0']);
		}
		else
		{
			std::cout << "Invalid index" << std::endl;
			std::cout << "Choose again" << std::endl;
			return 1;
		}
		return 0;
	}
	else
		exit(0);
}