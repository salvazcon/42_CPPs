#ifndef  EASYFIND_HPP
# define  EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
int easyFind(T& container, int n) {
	typename T::iterator ez = std::find(container.begin(), container.end(), n);
	if (ez == container.end())
		return -1;
	return std::distance(container.begin(), ez);
}

#endif
