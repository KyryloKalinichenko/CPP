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
	try{
		if (_grade == 1)
		{
			throw GradeTooHighException();
		}
		_grade--;
	}
	catch (GradeTooHighException& e){
		std::cout << "\nGradeTooHighExceptionn \n";
		exit(1);
	}
}

void	Bureaucrat::decrease( void ){
	try{
		if (_grade == 150)
		{
			throw GradeTooLowException();
		}
		_grade++;
	}
	catch (GradeTooLowException& e){
		std::cout << "\n GradeTooLowException \n";
		exit(1);
	}
}

const std::string & Bureaucrat::getName( void ) const{
	return _name;
}

int Bureaucrat::getGrade( void ) const{
	return _grade;
}

void Bureaucrat::signForm( Form f ){
	try {
		f.beSigned(*this);
	}
	catch (std::exception& e){
		std::cout << "\n Too low exception caught! \n";
	}
}