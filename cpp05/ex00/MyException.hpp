#ifndef MYEXCEPTION_HPP
#define MYEXCEPTION_HPP

#include <iostream>

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

#endif