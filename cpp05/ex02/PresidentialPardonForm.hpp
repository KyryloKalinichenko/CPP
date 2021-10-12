#ifndef PRESIDENTALPARDONFORM_HPP
#define PRESIDENTALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: virtual public Form {
    public:
        PresidentialPardonForm( void );
        PresidentialPardonForm( std::string name );
        PresidentialPardonForm(PresidentialPardonForm const & src);
        ~PresidentialPardonForm( void );
        PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );
		void action( std::string target ) const;

	private:
		std::string _name;
};

#endif