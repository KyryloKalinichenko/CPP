#include "easyfind.hpp"

void test_list(std::list<int> l){
	for(int i = 0; i < 10; i++)
	{
		l.push_back(i);
	}
	for(int i = 0; i < 10; i++)
	{
		std::cout << easyfind(l, i) << std::endl;
	}
	std::cout << easyfind(l, 50) << std::endl;
}

void test_arr( std::array<int, 10> arr){
	std::cout << easyfind(arr, 42) << std::endl;
	std::cout << easyfind(arr, 1) << std::endl;
}

int main(void){
	std::array<int, 10> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::list<int> l;

	std::cout << "-------------" << std::endl;
	test_list(l);
	std::cout << "-------------" << std::endl;
	test_arr(arr);
	return 0;
}