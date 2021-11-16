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
	if (*std::find(x.begin(), x.end(), goal) == goal)
		return 1;
	else
		return 0;
}

#endif