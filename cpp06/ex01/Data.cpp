#include "Data.hpp"

Data::Data( void ){
    return;
}

Data::Data(Data const & src){
    // set all var
	(void)src;
    return ;
}

Data::~Data( void ){
    // delete
    return;
}

Data & Data::operator=( Data const & rhs ){
    // ser var
	(void)rhs;
    return *this;
}

std::string & Data::getType( void ){
	return _type;
}

uintptr_t Data::serialize(Data* ptr){
	uintptr_t res;
	void* tmp;

	tmp = reinterpret_cast<void*>(ptr);
	res = reinterpret_cast<uintptr_t>(tmp);
	return res;
}
		
Data* Data::deserialize(uintptr_t raw){
	Data* res;
	void* tmp;

	tmp = reinterpret_cast< void* >(raw);
	res = reinterpret_cast< Data * >(tmp);
	return res;

}