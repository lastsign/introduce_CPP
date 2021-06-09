#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include <exception>

class Form;

class Bureaucrat
{
private:
	std::string _name;
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
	Bureaucrat();
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat &operator=(const Bureaucrat &assign);
	Bureaucrat(const std::string &name, int grade);
	const std::string &getName() const;
	int getGrade() const;
	virtual ~Bureaucrat();
	void increase();
	void decrease();
	void executeForm(const Form &form);
};
#endif
