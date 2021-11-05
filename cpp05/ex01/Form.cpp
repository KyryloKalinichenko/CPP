#include "Form.hpp"

Form::Form( void ): _signed(false), _exec(0), _grade_tosign(150), _grade_toexec(150), _name("default"){
    return;
}

Form::Form(Form const & src): _grade_tosign(src._grade_tosign), _grade_toexec(src._grade_toexec), _name(src._name){
    // set all var
	_signed = 0;
	_exec = 0;
    return ;
}

Form::Form(unsigned int s, unsigned int e, std::string name): _grade_tosign(s), _grade_toexec(e), _name(name){
    // set all var
	_signed = 0;
	_exec = 0;
    return ;
}

Form::~Form( void ){
    // delete
    return;
}

Form & Form::operator=( Form const & rhs ){
	//todo
	(void)rhs;
    return *this;
}

const std::string Form::getName( void ) const{
	return _name;
}

std::string * Form::getStatus( void ) const{
	std::string o;
	o += "The ";
	o += _name;
	o += " is ";
	if (_signed)
		o += "signed already!\n";
	else
		o += "not signed yet!\n";
	if (_exec)
		o += " And executed already!\n";
	else
		o += " And not executed yet!\n";
	std::string* ret = new std::string(o);
	return ret;
}

void	Form::beSigned(Bureaucrat & w){
	int i = w.getGrade();
	if (i > _grade_tosign)
		throw GradeTooLowException();
	else if (!_signed)
	{
		_signed = true;
		std::cout << _name << " has been signed!\n";
	}
	else if (_signed)
	{
		std::cout << " I've done it years ago, give me something new!\n";
	}
}

std::ostream & operator<<( std::ostream & o, Form const & rhs ){
	std::string* mess = rhs.getStatus();
	o << *mess << std::endl;
	delete mess;
	return o;
}
