#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: virtual public Form {
    public:
        RobotomyRequestForm( void );
        RobotomyRequestForm( std::string target );
        RobotomyRequestForm(RobotomyRequestForm const & src);
        ~RobotomyRequestForm( void );
        RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );
		void action( void ) const;

	private:
		std::string _name;
		std::string _target;
};

#endif