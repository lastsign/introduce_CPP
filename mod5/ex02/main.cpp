#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int main()
{
	srand(time(0));
	Bureaucrat bureaucrat("bur", 2);
	ShrubberyCreationForm shrubberyCreationForm("for children");
	RobotomyRequestForm robotomyRequestForm("For mister president");
	PresidentialPardonForm presidentialPardonForm("KEk");
	shrubberyCreationForm.signForm(bureaucrat);
	shrubberyCreationForm.beSigned(bureaucrat);
	shrubberyCreationForm.execute(bureaucrat);
	robotomyRequestForm.signForm(bureaucrat);
	robotomyRequestForm.beSigned(bureaucrat);
	robotomyRequestForm.execute(bureaucrat);
	presidentialPardonForm.signForm(bureaucrat);
	robotomyRequestForm.beSigned(bureaucrat);
	presidentialPardonForm.execute(bureaucrat);
	return 0;
}