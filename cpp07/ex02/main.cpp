#include "Array.hpp"

int main (void)
{
	Array<int> i;
	Array<int> arr(10);
	for (int k = 0; k < 10; k++){
		arr[k] = k;
	}
	for (int k = 0; k < 10; k++){
		std::cout << arr[k] << std::endl;
	}
	i = arr;
	for (int k = 0; k < 9; k++){
		std::cout << i[k] << std::endl;
	}
	std::cout << i.size() << std::endl;
	std::cout << arr.size() << std::endl;
	return 0;
}