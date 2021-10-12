#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// class ShrubberyCreationForm;
// class RobotomyRequestForm;
// class Form;

int main( void ){
	Intern lol;

	Bureaucrat a("Dave", 1);
	Bureaucrat b("Dav", 137);

	Form* f;
	Form* f1;
	Form* f2;


	f = lol.makeForm("ShrubberyCreationForm", "First");
	f1 = lol.makeForm("RobotomyRequestForm", "Second");
	f2 = lol.makeForm("PresidentialPardonFor", "Third");

	std::cout << a;
	a.signForm(*f);
	f->getStatus();
	try {
		f->execute(b);
	}
	catch(std::exception& e){
		std::cout << "\n Too high or unsigned exception caught! \n";
	}

	a.signForm(*f1);
	std::cout << "-------------------\n";
	try{
		f1->execute(b);
	}
	catch(std::exception& e){
		std::cout << "\n Robotimisation failed! \n";
	}

	if (f2){

		a.signForm(*f2);
		std::cout << "-------------------\n";
		try{
			f2->execute(b);
		}
		catch(std::exception& e){
			std::cout << "\n Pardon failed! \n";
		}
	}
	else
		std::cout << "Fail move \n";
	
	delete f;
	delete f1;
	
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
