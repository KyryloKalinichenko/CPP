#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

// class ShrubberyCreationForm;
// class RobotomyRequestForm;
// class Form;

int main( void ){
	Bureaucrat a("Dave", 1);
	Bureaucrat b("Dav", 137);

	ShrubberyCreationForm f;
	RobotomyRequestForm f1;

	std::cout << a;
	a.signForm(f);
	f.getStatus();
	try {
		f.execute(b);
	}
	catch(std::exception& e){
		std::cout << "\n Too high or unsigned exception caught! \n";
	}

	a.signForm(f1);
	std::cout << "-------------------\n";
	try{
		f1.execute(b);
	}
	catch(std::exception& e){
		std::cout << "\n Robotimisation failed! \n";
	}
		
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
