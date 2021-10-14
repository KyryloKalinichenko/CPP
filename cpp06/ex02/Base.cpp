#include "Base.hpp"

Base::Base( void ){
    return;
}

Base::Base(Base const & src){
    // set all var
	(void)src;
    return ;
}

Base::~Base( void ){
    // delete
    return;
}

Base & Base::operator=( Base const & rhs ){
    // ser var
	(void)rhs;
    return *this;
}
