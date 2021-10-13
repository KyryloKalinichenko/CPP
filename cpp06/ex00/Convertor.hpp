#ifndef CONVERTOR_HPP
#define CONVERTOR_HPP

#include <iostream>

class Convertor {
    public:
        Convertor( std::string s );
        Convertor(Convertor const & src);
        ~Convertor( void );

        Convertor & operator=( Convertor const & rhs );
        void use( void );
		operator int( void ) const;
		operator float( void ) const;
		operator double( void ) const;

        class FailExc: public std::exception {
            virtual const char * what () const throw ();
        };

    private:
        std::string _s;
};

#endif