#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template < typename T >
class MutantStack: public std::stack<T> {
    public:
        MutantStack( void );
        MutantStack(MutantStack const & src);
        ~MutantStack( void );
		std::string & getType( void );

        MutantStack & operator=( MutantStack const & rhs );

    private:
		std::string _type;
};

#endif