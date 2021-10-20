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

		iterator begin( void ){
			std::stack<T> tmp;
			while(this->size() > 1){
				tmp.push(this->top());
				this->pop();
			}
			iterator res = &this->top();
			while(tmp.size()){
				this->push(tmp.top());
				tmp.pop();
			}
			return res;
		};

		iterator end( void ){
			return (&this->top());
		};

        MutantStack & operator=( MutantStack const & rhs );

    private:
		std::vector<T> _stock;
};

#endif