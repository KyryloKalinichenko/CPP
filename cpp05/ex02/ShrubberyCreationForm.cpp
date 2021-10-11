#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ): Form(145, 137, "ShrubberyCreationForm"), _name("ShrubberyCreationForm"){
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string name ): Form(145, 137, "ShrubberyCreationForm"), _name(name){
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src){
    // set all var
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ){
    // delete
    return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ){
    // ser var
    return *this;
}

// std::string & ShrubberyCreationForm::getType( void ){
// 	return _type;
// }

void ShrubberyCreationForm::action( std::string target){
	std::cout << target << std::endl;
}