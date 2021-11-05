#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ){
	Bureaucrat a("David");
	Form f(10, 1, "lol");

	std::cout << a;
	std::cout << f;
	f.getStatus();
	try
	{
		a.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	for (int i = 0; i < 149 ; i++)
	{
		try
		{
			a.increase();
			a.signForm(f);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl << a;
	
	// for (int i = 0; i < 149 ; i++)
	// {
	// 	std::cout << i;
	// 	a.decrease();
	// }
	// std::cout << std::endl << a;

	return 0;
}
