#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
    public:
        Form( void );
        Form(Form const & src);
		Form(unsigned int s, unsigned int e, std::string name);

        ~Form( void );
		void getStatus( void );
		const std::string getName( void ) const;
		void	beSigned(Bureaucrat & w);

        Form & operator=( Form const & rhs );
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

    private:
		bool _signed;
		bool _exec;
		const int	_grade_tosign;
		const int	_grade_toexec;
		const std::string	_name;
};

#endif