#include "Form.hpp"

Form::Form( void ): _signed(0), _exec(0), _grade_tosign(150), _grade_toexec(150), _name("default"){
    return;
}

Form::Form(Form const & src): _grade_tosign(src._grade_tosign), _grade_toexec(src._grade_toexec), _name(src._name){
    // set all var
	_signed = 0;
	_exec = 0;
    return ;
}

Form::Form(unsigned int s, unsigned int e, const char *name): _grade_tosign(s), _grade_toexec(e), _name(name){
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

void Form::getStatus( void ){
	std::cout << "The " << _name << " is ";
	if (_signed)
		std::cout << "signed already!\n";
	else
		std::cout << "not signed yet!\n";
	if (_exec)
		std::cout << " And executed already!\n";
	else
		std::cout << " And not executed yet!\n";
	return ;
}

void	Form::beSigned(Bureaucrat & w){
	int i = w.getGrade();
	if (i > _grade_tosign){
		std::cout << _name << " hasn't been signed!\n";
		throw GradeTooLowException();
	}
	else
	{
		_signed = true;
		std::cout << _name << " has been signed!\n";
		std::cout << _signed << std::endl; 
	}
}

void 	Form::execute( Bureaucrat const & executor ){
	if (executor.getGrade() < this->_grade_toexec || !_signed)
	{
		throw GradeTooHighException();
		std::cout << _name << " hasn't been executed!\n";
	}
	else {
		_exec = 1;
		action();
		std::cout << _name << " has been executed!\n";
	}
}

// void 	Form::action( void )
