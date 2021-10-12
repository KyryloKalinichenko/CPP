#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern {
    public:
        Intern( void );
        Intern(Intern const & src);
        ~Intern( void );
		std::string & getType( void );

        Intern & operator=( Intern const & rhs );
		Form* makeForm( std::string f, std::string target );

    private:
		std::string _type;
		Form* _robo( std::string target );
		Form* _pres( std::string target );
		Form* _shrubb( std::string target );
};

typedef Form* (Intern::*Fpoint)( std::string target );


#endif