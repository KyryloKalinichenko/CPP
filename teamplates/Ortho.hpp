#ifndef ORTHO_HPP
#define ORTHO_HPP

#include <iostream>

class Name {
    public:
        Name( void );
        Name(Name const & src);
        ~Name( void );
		std::string & getType( void );

        Name & operator=( Name const & rhs );

    private:
		std::string _type;
};

#endif