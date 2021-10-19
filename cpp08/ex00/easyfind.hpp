#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
#include <list>

template< typename T >
int easyfind(T const & x, int goal)
{
	return (std::find(x.begin(), x.end(), goal) != x.end());
}

#endif