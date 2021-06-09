#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	int _gradeSign;
	int _gradeExec;
	RobotomyRequestForm();
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
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &assign);
	virtual ~RobotomyRequestForm();
	void execute(const Bureaucrat &executor) const;
};

#endif
