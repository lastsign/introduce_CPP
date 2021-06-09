#ifndef ITER_HPP
# define ITER_HPP

template<class T>
void pow2(const T &r)
{
	std::cout << "it's work " << r << " heh!" << std::endl;
}

template<class T>
void iter(T *array, unsigned int len, void (*somefunc)(const T &))
{
	for (unsigned int i = 0; i < len; ++i)
		somefunc(array[i]);
}

#endif
