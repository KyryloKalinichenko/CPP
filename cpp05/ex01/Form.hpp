#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
    public:
		class GradeTooHighException : public std::exception{
			const char * what () const throw ()
			{
				return "To big!";
			}
		};

		class GradeTooLowException : public std::exception{
			const char * what () const throw ()
			{
				return "To low!";
			}
		};
        Form( void );
        Form(Form const & src);
        ~Form( void );
		void getStatus( void );
		void getName( void );
		void	beSigned(Bureaucrat & w);

        Form & operator=( Form const & rhs );

    private:
		bool _signed;
		bool _exec;
		const int	_grade_tosign;
		const int	_grade_toexec;
		const std::string	_name;
};

#endif