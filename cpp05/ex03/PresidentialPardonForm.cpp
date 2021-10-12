#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): Form(145, 137, "PresidentialPardonForm"), _name("PresidentialPardonForm"), _target("default"){
    return;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ): Form(145, 137, "PresidentialPardonForm"), _name("PresidentialPardonForm"), _target(target){
    return;
}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src){
    // set all var
	(void)src;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void ){
    // delete
    return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ){
    // ser var
	(void)rhs;
    return *this;
}


void PresidentialPardonForm::action( void ) const{
	std::cout << _target << " has been pardoned by Zafod Beeblebrox.\n";
}