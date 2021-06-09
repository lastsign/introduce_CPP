#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Form *createPresidentialPardon(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

Form *createRobotomyRequest(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

Form *createShrubberyCreation(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}


Form *Intern::makeForm(std::string name, std::string target)
{
	try
	{
		_forms[0]._type = "PresidentialPardon";
		_forms[0].createForm = &createPresidentialPardon;
		_forms[1]._type = "RobotomyRequest";
		_forms[1].createForm = &createRobotomyRequest;
		_forms[2]._type = "ShrubberyCreation";
		_forms[2].createForm = &createShrubberyCreation;
		for (int i = 0; i < 3; ++i)
		{
			if (name == _forms[i]._type)
			{
				Form *form = _forms[i].createForm(target);
				std::cout << "Intern creates <" << target << ">" << std::endl;
				return form;
			}
		}
		throw FormDoesNotExist();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return nullptr;
}

Intern::Intern(const Intern &intern)
{
	*this = intern;
}

Intern &Intern::operator=(const Intern &intern)
{
	if (this != &intern)
	{
		_forms->createForm = intern._forms->createForm;
		_forms->_type = intern._forms->_type;
	}
	return *this;
}
