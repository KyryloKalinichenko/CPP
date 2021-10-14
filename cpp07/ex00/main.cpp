#include "Header.hpp"
#include <iostream>

int main(void)
{
	int i1, i2;
	// float f1, f2;
	// double d1, d2;

	i1 = 10;
	i2 = 20;
	std::cout << min<int>(i1, i2) << std::endl;
	std::cout << max<int>(i1, i2) << std::endl;
	swap<int>(i1, i2);
	std::cout << i1 << " " << i2 << std::endl;


	return 0;
}