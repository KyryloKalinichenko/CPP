#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat( void ):_name("default"){
	_grade = 150;
    return;
}

Bureaucrat::Bureaucrat( std::string name ):_name(name){
	_grade = 150;
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src.getName()), _grade(src.getGrade()){
    // set all var
    return ;
}

Bureaucrat::~Bureaucrat( void ){
    // delete
    return;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs ){
    // ser var
	_grade = rhs.getGrade();
    return *this;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs ){
	o << rhs.getName() << " has a grade " << rhs.getGrade() << std::endl;
	return o;
}

void	Bureaucrat::increase( void ){
	if (_grade == 1)
	{
		throw GradeTooHighException();
	}
	_grade--;
}

void	Bureaucrat::decrease( void ){
	if (_grade == 150)
	{
		throw GradeTooLowException();
	}
	_grade++;
}

const std::string & Bureaucrat::getName( void ) const{
	return _name;
}

int Bureaucrat::getGrade( void ) const{
	return _grade;
}

void Bureaucrat::signForm( Form & f ){
	try {
		f.beSigned(*this);
	}
	catch (const std::exception& e){
		std::cout << "I have no rights to do it =(\n" << std::endl;
	}
}