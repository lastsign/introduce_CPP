#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	~Intern();
	Form *makeForm(std::string name, std::string target);
private:
	struct s_form{
		std::string _type;
		Form *(*createForm)(const std::string &name);
	} _forms[3];
	Intern(const Intern &intern);
	Intern &operator=(const Intern &intern);
	class FormDoesNotExist : public std::exception
	{
		const char * what() const throw()
		{
			return "Form doesn't exist";
		}
	};
};

#endif
