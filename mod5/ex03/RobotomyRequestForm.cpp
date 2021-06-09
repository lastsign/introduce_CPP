#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	try
	{
		if (!Form::getSign())
			throw UnsignFormException();
		else if (executor.getGrade() > _gradeExec)
			throw GradeTooLowException();
		else
		{
			if (rand() % 2)
			{
				std::cout << "dRiL...DrIl" << std::endl;
				std::cout << "<" << Form::getName() << "> has been robotomized"
						  << std::endl;
			}
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	*this = copy;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	if (this != &assign)
	{
		_gradeExec = assign._gradeExec;
		_gradeSign = assign._gradeSign;
	}
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
		: Form(target, false, 72), _gradeSign(72), _gradeExec(45)
{}
