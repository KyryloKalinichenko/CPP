#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ){
	Bureaucrat a("David");
	Form f(10, 1, "lol");

	std::cout << a;
	f.getStatus();
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
