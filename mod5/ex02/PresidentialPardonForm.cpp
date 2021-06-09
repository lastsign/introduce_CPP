#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	*this = copy;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	if (this != &assign)
	{
		_gradeExec = assign._gradeExec;
		_gradeSign = assign._gradeSign;
	}
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
		: Form(target, false, 25), _gradeSign(25), _gradeExec(5)
{}


PresidentialPardonForm::~PresidentialPardonForm()
{

}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	try
	{
		if (!Form::getSign())
			throw UnsignFormException();
		else if (executor.getGrade() > _gradeExec)
			throw GradeTooLowException();
		else
			std::cout << "<" << Form::getName() << "> has been pardoned by Zafod Beeblebrox" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
