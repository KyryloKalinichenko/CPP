#include "span.hpp"

int main( void ){
	Span a(10);

	for (int i = 0; i < 11; i++)
	{
		try
		{
			a.AddNumber(i);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			std::cout << "Enough!" << std::endl;
		}
		
	}
	a.get_all();
	std::cout << "--------" << std::endl;
	std::cout << a.longestSpan() << std::endl;
	std::cout << a.shortestSpan() << std::endl;
	return 0;
}