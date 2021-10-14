#include "Data.hpp"

int main(void){
	Data a;
	uintptr_t serialized;
	Data *b = &a;

	std::cout << "The address before: " << b << std::endl;
	serialized = a.serialize(b);

	std::cout << "The address after: " << a.deserialize(serialized) << std::endl;

	return 0;
}