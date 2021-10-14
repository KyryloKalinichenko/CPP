#include "Base.hpp"
#include <cstdlib>
#include <ctime>

class A: public Base {};
class B: public Base {};
class C: public Base {};
class D: public Base {};

typedef Base* (*func) ( void );

Base* give_A( void ){
	std::cout << "A created!" << std::endl;
	return new A;
}

Base* give_B( void ){
	std::cout << "B created!" << std::endl;
	return new B;
}

Base* give_C( void ){
	std::cout << "C created!" << std::endl;
	return new C;
}

Base* give_D( void ){
	std::cout << "D created!" << std::endl;
	return new D;
}

Base* generate(void){
	func functions[] = 
	{ 
		give_A,
		give_B,
		give_C,
		give_D
	};

	std::srand(std::time(nullptr));
	int random_variable = std::rand();
	return functions[random_variable % 4]();
}

void identify(Base* p){
	try
	{
		if (dynamic_cast<A*>(p)){
			std::cout << "A" << std::endl;
			return ;
		}
		if (dynamic_cast<B*>(p)){
			std::cout << "B" << std::endl;
			return ;
		}
		if (dynamic_cast<C*>(p)){
			std::cout << "C" << std::endl;
			return ;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void identify(Base& p){
	Base tmp;
	try
	{
		tmp = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		try
		{
			tmp =dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
			return ;
		}
		catch(const std::exception& e)
		{
			try
			{
				tmp = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
				return ;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			
		}
	}

}

int main(void){
	Base* tmp;
	for (int i = 0; i < 10; i++)
	{
		tmp = generate();
		identify(tmp);
		identify(*tmp);
		delete tmp;
		system("sleep 1");
	}
	return 0;
}