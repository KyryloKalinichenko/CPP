#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ): Form(145, 137, "ShrubberyCreationForm"), _name("ShrubberyCreationForm"){
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string name ): Form(145, 137, "ShrubberyCreationForm"), _name(name){
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src){
    // set all var
	(void)src;
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ){
    // delete
    return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ){
    // ser var
	(void)rhs;
    return *this;
}

// std::string & ShrubberyCreationForm::getType( void ){
// 	return _type;
// }

void Form::action( std::string target) const{
	std::cout << target << std::endl;
}