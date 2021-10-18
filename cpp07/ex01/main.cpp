#include "Header.hpp"

int main(void){
	int arr[4] = {3, 2, 1, 4};
	std::string arr2[4] = {"lol", "kek", "here", "there"};
	char arr3[4] = "lol";

	iter(arr, (unsigned int)4, print<int>);
	iter(arr2, (unsigned int)4, print<std::string>);
	iter(arr3, (unsigned int)3, print<char>);
	return 0;
}