#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template< typename T>
class Array{
	public:
		Array<T>(void){ _arr = new T(); _size = 0; std::cout << "Created\n"; return ;};
		Array<T>( unsigned int n){ _arr = new T[n]; _size = n; std::cout << "Created\n"; return ;};
		~Array<T>( void ){  std::cout << "Deleted\n"; delete _arr;};
		Array & operator=(Array & rhs){
			delete _arr;
			_arr = new T[rhs._size];
			_size = rhs._size;
			for( unsigned int i = 0; i < rhs._size; i++)
			{
				_arr[i] = rhs[i];
			}
			std::cout << " Passed = \n";
			return *this;
			};
		T & operator[](unsigned int i){
			std::cout << " Passed [] \n";
			if (i >= _size)
				throw std::exception();
			else
				return _arr[i];
		};
		unsigned int size( void ){ return _size;};

		
	private:
		T* _arr;
		unsigned int _size;
};

#endif