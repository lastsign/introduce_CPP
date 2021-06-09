#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include "Bureaucrat.hpp"
# include <exception>

class Form
{
private:
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
	void beSigned(const Bureaucrat &bureaucrat);
	void signForm(const Bureaucrat &bureaucrat);
	const std::string &getName() const;
	virtual void execute(const Bureaucrat &executor) const = 0;

	Form(const std::string &name);

	int getSign() const;
	int getGrade() const;
};

#endif
