#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	int _gradeSign;
	int _gradeExec;
	ShrubberyCreationForm();
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
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &assign);
	virtual ~ShrubberyCreationForm();
	void execute(const Bureaucrat &executor) const;
};

#endif
