#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: virtual public Form {
    public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm( std::string target );
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ~ShrubberyCreationForm( void );
        ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );
		void action( void ) const;

	private:
		std::string _name;
		std::string _target;
};

#endif