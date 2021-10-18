#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template< typename T>
class Array{
	public:
		Array<T>(void){
			_arr = new T[];		
			return
		};
		Array<T>( unsigned int n){ _arr = new T(n); return ;};
		~Array<T>( void ){ delete _arr;};
	private:
		T* _arr;
};

#endif