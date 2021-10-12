#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern( void ){
    return;
}

Intern::Intern(Intern const & src){
    // set all var
    (void)src;
	return ;
}

Intern::~Intern( void ){
    // delete
    return;
}

Intern & Intern::operator=( Intern const & rhs ){
	(void)rhs;
    // ser var
    return *this;
}

Form*  Intern::_pres( std::string target ){
	return new PresidentialPardonForm(target);
}

Form*  Intern::_robo( std::string target ){
	return new RobotomyRequestForm(target);
}

Form*  Intern::_shrubb( std::string target ){
	return new ShrubberyCreationForm(target);
}

Form* Intern::makeForm( std::string f, std::string target ){
    std::string	nm[4] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    Fpoint fun[] = { &Intern::_robo, &Intern::_pres, &Intern::_shrubb};
	
	for (int i = 0; i < 3; i++)
    {
        if (nm[i] == f){
			std::cout << "Intern has been created the form " << f << std::endl;
            return (this->*(fun[i]))( target );
		}
    }
	std::cout << "Intern wasn't able to create the form " << f << std::endl;
	return NULL;
}