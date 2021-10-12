#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: virtual public Form {
    public:
        RobotomyRequestForm( void );
        RobotomyRequestForm( std::string name );
        RobotomyRequestForm(RobotomyRequestForm const & src);
        ~RobotomyRequestForm( void );
        RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );
		void RobotomyRequestForm::action( std::string target ) const;

	private:
		std::string _name;
};

#endif