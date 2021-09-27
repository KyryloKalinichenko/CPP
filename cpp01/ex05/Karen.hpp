#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen {
    public:
        Karen( void );
        ~Karen( void );
        void complain( std::string level );

    private:
        std::string _type;
        void _debug( void );
        void _info( void );
        void _warning( void );
        void _error( void );
};
typedef void (Karen::*Fpoint)();

#endif