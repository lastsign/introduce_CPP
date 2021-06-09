#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bureaucrat = Bureaucrat("bur", 151);
	bureaucrat.increase();
	bureaucrat.decrease();
	return 0;
}