#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm: virtual public Form {
    public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm( std::string name );
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ~ShrubberyCreationForm( void );
        ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );
		// void Form::action( std::string target ) const;

	private:
		std::string _name;
};

#endif