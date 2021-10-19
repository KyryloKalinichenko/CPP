#include "span.hpp"

Span::Span( void ):_N(0){
    return;
}

Span::Span( unsigned int n ): _N(n){
    return;
}

Span::Span(Span const & src):_N(src._N){
    // set all var
	_stock = src._stock;
    return ;
}

Span::~Span( void ){
    // delete
    return;
}

Span & Span::operator=( Span const & rhs ){
    // ser var
	_N = rhs._N;
	_stock = rhs._stock;
    return *this;
}

void	Span::get_all( void ){
	for(unsigned int i = 0; i < _stock.size(); i++){
		std::cout << _stock[i] << std::endl;
	}
}

void Span::AddNumber( int x ){
	if (_N == _stock.size())
		throw std::exception();
	else
	{
		_stock.push_back(x);
	}
}

int Span::longestSpan( void ){
	if (!_N || _N == 1)
		return -1;
	int max = *std::max_element( _stock.begin(), _stock.end());
	int min = *std::min_element( _stock.begin(), _stock.end());
	return (max - min);
} 
int Span::shortestSpan( void ){
	if (!_N || _N == 1)
		return -1;
	std::vector<int> tmp;
	tmp = _stock;
	std::sort(tmp.begin(), tmp.end());
	return (tmp[1] - tmp[0]); 
}