#include <iostream>
#include "Bureaucrat.hpp"

int main( void ){
	Bureaucrat a("David");
	a.increase();
	Form f("todo", 150);
	Form f2("todo", 149);
	Form f3("todo", 148);

	std::cout << a << std::endl;
	std::cout << f << std::endl;

	a.signForm(f);
	a.signForm(f2);
	a.signForm(f3);


	return 0;
}
