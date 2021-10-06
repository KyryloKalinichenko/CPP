#include "Form.hpp"

Form::Form( void ):_name("default"), _signed(0), _grade_tosign(150), _grade_toexec(150){
    return;
}

Form::Form(Form const & src){
	_signed = src._signed;
	_name = stc._name;
	_grade_tosign = src._grade_tosign;
	_grade_toexec = src._grade_toexec;
    // set all var
    return ;
}

Form::~Form( void ){
    // delete
    return;
}

Form & Form::operator=( Form const & rhs ){
    // ser var
	_signed = rhs._signed;
	_name = rhs._name;
	_grade_tosign = rhs._grade_tosign;
	_grade_toexec = rhs._grade_toexec;
    return ;
}

std::string & Form::getName( void ){
	return _name;
}

void Form::getStatus( void ){
	std::cout << "The " << _name << "is ";
	if (_signed)
		std::cout << "signed already!\n";
	else{
		std::cout << "not signed yet!\n";
		return ;
	}
}		