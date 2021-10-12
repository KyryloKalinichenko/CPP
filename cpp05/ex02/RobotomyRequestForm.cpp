#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ): Form(72, 45, "RobotomyRequestForm"), _name("RobotomyRequestForm"){
    return;
}

RobotomyRequestForm::RobotomyRequestForm( std::string name ): Form(72, 45, "RobotomyRequestForm"), _name(name){
    return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src){
    // set all var
	(void)src;
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void ){
    // delete
    return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ){
    // ser var
	(void)rhs;
    return *this;
}


void RobotomyRequestForm::action( std::string target) const{
	std::cout << "Bzzzzzzzz" << target << " has been robotomized successfully 50% of the time." << std::endl;
}

void 	RobotomyRequestForm::execute( Bureaucrat const & executor ){
	if (executor.getGrade() < this->_grade_toexec || !_signed)
	{
		throw GradeTooHighException();
		std::cout << _name << " hasn't been executed!\n";
	}
	else {
		_exec = 1;
		action(executor.getName());
		std::cout << _name << " has been executed!\n";
	}
}