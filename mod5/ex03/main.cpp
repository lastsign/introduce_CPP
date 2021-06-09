#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	srand(time(0));
	Intern intern;
	Form *rrf;
	Form *rrf2;
	Form *rrf3;
	Bureaucrat bureaucrat("SomeBoss", 2);

	rrf = intern.makeForm("PresidentialPardon", "Lel");
	rrf2 = intern.makeForm("RobotomyRequest", "Kek");
	rrf3 = intern.makeForm("ShrubberyCreation", "Omega");
	rrf->signForm(bureaucrat);
	rrf->beSigned(bureaucrat);
	rrf->execute(bureaucrat);

	rrf2->signForm(bureaucrat);
	rrf2->beSigned(bureaucrat);
	rrf2->execute(bureaucrat);

	rrf3->signForm(bureaucrat);
	rrf3->beSigned(bureaucrat);
	rrf3->execute(bureaucrat);
	return 0;
}