#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>
#include <vector>

template < typename T >
class MutantStack: public std::stack<T> {
    public:
		typedef T* iterator;

        MutantStack( void ){
			_stock = std::vector<T>();
			return ;
		};
        MutantStack(MutantStack const & src){
			_stock = src._stock;
		}
        // ~MutantStack( void );

		iterator begin( void ){
			std::stack<T> tmp(*this);
			while(tmp.size() > 0){
				tmp.top();
				tmp.pop();
			}
			return &tmp.top() - (tmp.size() + 1);
		};

		iterator end( void ){
			return (&this->top() + 1);
		};

        MutantStack & operator=( MutantStack const & rhs );
        iterator operator[]( unsigned int const & rhs ){
			std::stack<T> tmp(*this);
			for(unsigned int i = 0; rhs > i; i++)
				tmp.pop();
			return &tmp.top();
		};

    private:
		std::vector<T> _stock;
};

#endif