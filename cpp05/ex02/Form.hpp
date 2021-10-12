#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include "Exceptions.hpp"

class Form: public Exception{
    public:
        Form( void );
        Form(Form const & src);
		Form(unsigned int s, unsigned int e, const char* name);

        ~Form( void );
		void getStatus( void );
		const std::string getName( void ) const;
		void	beSigned(Bureaucrat & w);
		virtual void execute( Bureaucrat const & executor );

        Form & operator=( Form const & rhs );
		virtual void action( std::string target ) const = 0;

    private:
		bool _signed;
		bool _exec;
		const int	_grade_tosign;
		const int	_grade_toexec;
		const std::string	_name;
};

#endif