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
