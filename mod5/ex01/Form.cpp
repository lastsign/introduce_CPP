#include "Form.hpp"

const std::string &Form::getName() const
{
	return _name;
}

int Form::getGrade() const
{
	return _grade;
}

Form::Form(const std::string &name, int sign, int grade)
{
	try
	{
		if (grade <= 0)
			throw GradeTooHighException();
		else if (grade >= 151)
			throw GradeTooLowException();
		else
		{
			_name = name;
			_sign = sign;
			_grade = grade;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::Form()
{}

Form::~Form()
{

}

Form::Form(const Form &copy)
{
	*this = copy;
}

Form &Form::operator=(const Form &assign)
{
	if (this != &assign)
	{
		try
		{
			if (_grade <= 0)
				throw GradeTooLowException();
			else if (_grade >= 151)
				throw GradeTooHighException();
			else
			{
				_name = assign._name;
				_sign = assign._sign;
				_grade = assign._grade;
			}
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return *this;
}

void Form::signForm(const Bureaucrat &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() > _grade)
			throw GradeTooLowException();
		else
		{
			_sign = 1;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (_sign)
	{
		std::cout << "<" << bureaucrat.getName() << "> signs <" << _name << ">" << std::endl;
	}
	else
	{
		std::cout << "<" << bureaucrat.getName() << "> cannot sign <" << _name << "> because <don't have enough grade>" << std::endl;
	}
}

int Form::getSign() const
{
	return _sign;
}
