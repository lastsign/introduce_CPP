#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	int _gradeSign;
	int _gradeExec;
	PresidentialPardonForm();
	class UnsignFormException : public std::exception
	{
		const char * what() const throw()
		{
			return "Form unsign by bureaucrat";
		}
	};
	class GradeTooLowException : public std::exception
	{
		const char * what() const throw()
		{
			return "Grade low to execute";
		}
	};
public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &assign);
	virtual ~PresidentialPardonForm();
	void execute(const Bureaucrat &executor) const;
};

#endif
