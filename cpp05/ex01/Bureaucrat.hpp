#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
// #include "MyException.hpp"


class Bureaucrat {
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
        Bureaucrat( void );
		Bureaucrat( std::string name );
        Bureaucrat(Bureaucrat const & src);
        ~Bureaucrat( void );
		const std::string & getName( void ) const ;
		int getGrade( void ) const;

        Bureaucrat & operator=( Bureaucrat const & rhs );
		void	increase( void );
		void	decrease( void );


    private:
		const std::string _name;
		int		_grade;
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif