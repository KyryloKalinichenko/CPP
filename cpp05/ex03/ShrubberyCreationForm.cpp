#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ): Form(145, 137, "ShrubberyCreationForm"), _name("ShrubberyCreationForm"){
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ): Form(145, 137, "ShrubberyCreationForm"), _name("ShrubberyCreationForm"), _target(target){
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


void ShrubberyCreationForm::action( void) const{
	std::ofstream outdata;

	try{
		outdata.open(_target + "_shrubbery");
	}
	catch(std::exception& e)
	{
		std::cout << "Not able to open the file !\n";
	}
	outdata << "	   		  ,@@@@@@@," << std::endl;
	outdata << "	  ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	outdata << "	,&%%&%&&%,@@@@@/@@@@@@,8888888/8o" << std::endl;
	outdata << "	,%&&&&&%&&%,@@@@@@@/@@@88888888/88'" << std::endl;
	outdata << "	%&&%&%&/%&&%@@@@@/ /@@@88888888888'" << std::endl;
	outdata << "	%&&%/ %&%%&&@@| V /@@' `8888 `/88'" << std::endl;
	outdata << "	`&%| ` /%&'    |.|        | '|8'" << std::endl;
	outdata << "	   |o|         | |        | |" << std::endl;
	outdata << "	   |.|         | |        | |" << std::endl;
	outdata << "	jgs \\/ ._  /_/  ,//__\\/. _//__/_" << std::endl;
	outdata.close();
}