#include <fstream>
#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	try
	{
		if (!Form::getSign())
			throw UnsignFormException();
		else if (executor.getGrade() > _gradeExec)
			throw GradeTooLowException();
		else
		{
			std::string nefl = Form::getName();
			nefl += "_shrubbery";
			std::ofstream ofl(nefl);
			ofl << "      '.,				 " << "\n";
			ofl << "        'b      *		 " << "\n";
			ofl << "         '$    #.		 " << "\n";
			ofl << "         '$    #.		 " << "\n";
			ofl << "          *#  @):		 " << "\n";
			ofl << "          :@,@):   ,.**:'" << "\n";
			ofl << ",         :@@*: ..**'	 " << "\n";
			ofl << " '#o.    .:(@'.@*\"'	 " << "\n";
			ofl << "    'bq,..:,@@*'   ,*	 " << "\n";
			ofl << "    ,p$q8,:@)'  .p*'	 " << "\n";
			ofl << "    '    '@@Pp@@*'		 " << "\n";
			ofl << "         Y7'.'			 " << "\n";
			ofl << "        :@):.			 " << "\n";
			ofl << "       .:@:'.			 " << "\n";
			ofl << "      .::(@:.			 ";
			ofl.close();
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	*this = copy;
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	if (this != &assign)
	{
		_gradeExec = assign._gradeExec;
		_gradeSign = assign._gradeSign;
	}
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
		: Form(target, false, 145), _gradeSign(145), _gradeExec(137)
{}
