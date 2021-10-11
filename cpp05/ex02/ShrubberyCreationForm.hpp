#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form {
    public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm( std::string name );
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ~ShrubberyCreationForm( void );
        ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );
		void action( std::string target);

	private:
		std::string _name;
};

#endif