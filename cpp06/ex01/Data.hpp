#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data {
    public:
        Data( void );
        Data(Data const & src);
        ~Data( void );
		std::string & getType( void );

        Data & operator=( Data const & rhs );
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
		
    private:
		std::string _type;
};

#endif