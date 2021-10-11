#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void ){
	Bureaucrat a("Dave");
	ShrubberyCreationForm f;

	std::cout << a;
	a.signForm(f);
	// for (int i = 0; i < 149 ; i++)
	// {
	// 	std::cout << i;
	// 	a.increase();
	// 	a.signForm();
	// }
	// std::cout << std::endl << a;

	// for (int i = 0; i < 149 ; i++)
	// {
	// 	std::cout << i;
	// 	a.decrease();
	// }
	// std::cout << std::endl << a;

	return 0;
}
