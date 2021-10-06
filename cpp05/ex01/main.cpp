#include <iostream>
#include "Bureaucrat.hpp"

int main( void ){
	Bureaucrat a("David");

	std::cout << a;
	for (int i = 0; i < 149 ; i++)
	{
		std::cout << i;
		a.increase();
	}
	std::cout << std::endl << a;

	for (int i = 0; i < 149 ; i++)
	{
		std::cout << i;
		a.decrease();
	}
	std::cout << std::endl << a;

	return 0;
}
