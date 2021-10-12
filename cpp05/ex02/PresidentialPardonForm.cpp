#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): Form(145, 137, "PresidentialPardonForm"), _name("PresidentialPardonForm"){
    return;
}

PresidentialPardonForm::PresidentialPardonForm( std::string name ): Form(145, 137, "PresidentialPardonForm"), _name(name){
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


void PresidentialPardonForm::action( std::string target) const{
	std::cout << target << " has been pardoned by Zafod Beeblebrox.\n";
}