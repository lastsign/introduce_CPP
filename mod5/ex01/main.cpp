#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat bureaucrat("bur", 3);
	Form form("for children", false, 4);
	form.signForm(bureaucrat);
	form.beSigned(bureaucrat);


	Bureaucrat bureaucrat1("bur", 12);
	Form form1("for adult", false, 4);
	form1.signForm(bureaucrat1);
	form1.beSigned(bureaucrat1);
	return 0;
}