#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template<typename T>
int 	easyfind(T &container, int value)
{
	for (unsigned int i = 0; i < container.size(); ++i)
	{
		if (container[i] == value)
			return i;
	}
	return -1;
}

#endif
