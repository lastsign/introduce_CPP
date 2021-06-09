#include "Bureaucrat.hpp"
#include "Form.hpp"


Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name),
															 _grade(grade)
{
	try
	{
		if (_grade <= 0)
			throw GradeTooHighException();
		else if (_grade >= 151)
			throw GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::~Bureaucrat()
{

}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << "<" << bureaucrat.getName() << ">, bureaucrat grade <" << bureaucrat.getGrade() << ">" << std::endl;
	return os;
}

const std::string &Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assign)
{
	_name = assign._name;
	_grade = assign._grade;
	return *this;
}

void Bureaucrat::increase()
{
	try
	{
		if (_grade - 1 <= 0)
			throw GradeTooHighException();
		else
			_grade--;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::decrease()
{
	try
	{
		if (_grade + 1 >= 151)
			throw GradeTooLowException();
		else
			_grade++;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(const Form &form)
{
	form.execute(*this);
}