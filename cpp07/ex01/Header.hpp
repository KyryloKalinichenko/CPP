#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>

template< typename T >
void print(T const & ar){
	std::cout << ar << std::endl;
}

template< typename T >
void iter(T * x, unsigned int y, void fun(T const & ar))
{
	unsigned int i = -1;

	while(++i < y)
	{
		fun(x[i]);
	}
}


// template< typename T >
// void test(T * arr, unsigned int size){
// 	print<
// }

#endif