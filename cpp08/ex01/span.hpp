#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
    public:
        Span( void );
        Span( unsigned int n );
        Span(Span const & src);
        ~Span( void );

		void AddNumber(int x);
		void get_all( void );
		int longestSpan( void ); 
		int shortestSpan( void ); 

        Span & operator=( Span const & rhs );

    private:
		unsigned int _N;
		std::vector<int> _stock;
};

#endif