#ifndef ORTHO_HPP
#define ORTHO_HPP

#include <iostream>

class Name {
    public:
        Name( void );
        Name(Name const & src);
        ~Name( void );

        Name & operator=( Name const & rhs );

    private:
};

#endif