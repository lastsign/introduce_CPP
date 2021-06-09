#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include "Bureaucrat.hpp"


class Form
{
private:
	Form(const std::string &name);

	std::string _name;
	int _sign;
	int _grade;
	class GradeTooHighException : public std::exception
	{
		const char * what() const throw()
		{
			return "Grade too high";
		}
	};
	class GradeTooLowException : public std::exception
	{
		const char * what() const throw()
		{
			return "Grade too low";
		}
	};

public:
	Form();
	Form(const Form &copy);
	Form &operator=(const Form &assign);
	virtual ~Form();
	Form(const std::string &name, int sign, int grade);
	void beSigned(const Bureaucrat &);
	void signForm(const Bureaucrat &);
	const std::string &getName() const;
	int getSign() const;
	int getGrade() const;
	void execute(const Bureaucrat &executor) const;
};

#endif
