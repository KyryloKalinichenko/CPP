#ifndef PRESIDENTALPARDONFORM_HPP
#define PRESIDENTALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: virtual public Form {
    public:
        PresidentialPardonForm( void );
        PresidentialPardonForm( std::string target );
        PresidentialPardonForm(PresidentialPardonForm const & src);
        ~PresidentialPardonForm( void );
        PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );
		void action( void ) const;

	private:
		std::string _name;
		std::string _target;
};

#endif