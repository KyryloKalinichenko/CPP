#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
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
		Form( const std::string name, const int grade_tosign );

        Form(Form const & src);
        ~Form( void );
		void getStatus( void );
		const std::string& getName( void ) const;
		int	getGrade_tosign( void );
		bool getSign( void );

		void	beSigned( Bureaucrat & w );

        Form & operator=( Form const & rhs );

    private:
		const std::string	_name;
		bool _signed;
		const int	_grade_tosign;
};

std::ostream & operator<<( std::ostream & o, Form & rhs );


#endif