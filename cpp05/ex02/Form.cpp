#include "Form.hpp"

Form::Form( void ):_name("default"), _signed(0), _grade_tosign(150){
    return;
}

Form::Form( const std::string name, const int grade_tosign ):_name(name), _signed(0), _grade_tosign(grade_tosign){
    return;
}

Form::Form(Form const & src):_name(src._name), _signed(0), _grade_tosign(src._grade_tosign){
	_signed = src._signed;
    // set all var
    return ;
}

Form::~Form( void ){
    // delete
    return;
}

int	Form::getGrade_tosign( void ){
	return _grade_tosign;
}

Form & Form::operator=( Form const & rhs ){
    // ser var
	_signed = rhs._signed;
    return *this;
}

const std::string & Form::getName( void ) const {
	return _name;
}

bool Form::getSign( void ){
	return _signed;
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

void Form::beSigned( Bureaucrat & w ){
	int i;

	i = w.getGrade();
	if (_signed)
	{
		std::cout << "Already signed form!\n";
		return ;
	}
	if (i == _grade_tosign){
		_signed = 1;
		std::cout << "The form " << _name << " is signed!" << std::endl;
	}
	else if (i > _grade_tosign)
		throw GradeTooHighException();
	else
		throw GradeTooLowException();
}

std::ostream & operator<<( std::ostream & o, Form & rhs ){
	o << "The " << rhs.getName() << " is ";
	if (rhs.getSign())
		std::cout << "signed already!\n";
	else{
		std::cout << "not signed yet!\n";
		return o;
	}
	return o;
}