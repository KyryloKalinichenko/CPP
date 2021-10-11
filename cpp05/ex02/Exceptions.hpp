#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <iostream>

class Exception{
	protected:
	class GradeTooHighException : public std::exception{
		public:
		virtual const char * what () const throw ()
		{
			return "To big!";
		}
	};

	class GradeTooLowException : public std::exception{
		public:
		virtual const char * what () const throw ()
		{
			return "To low!";
		}
	};
};
#endif