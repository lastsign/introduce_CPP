#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <exception>
# include <iostream>

template<class T>
class Array
{
public:
	Array();
	Array(unsigned int size);
	Array &operator=(const Array<T> &assign);
	Array(const Array &copy);
	virtual ~Array();
	T &operator[](int index);
	int size();
	class OutOfLinits : public std::exception{
	const char *what() const throw()
	{return "element is out of the limits";} };
private:
	int _size;
	T *_array;
};

template<class T>
T &Array<T>::operator[](int index)
{
	if (index >=0 && index < size())
		return _array[index];
	throw OutOfLinits();
}

template<class T>
Array<T>::~Array()
{
	if (_array != nullptr)
	{
		delete[] _array;
		_size = 0;
	}
}

template<class T>
Array<T>::Array(unsigned int size)
{
	_array = new T[size]();
	_size = size;
}

template<class T>
Array<T>::Array()
{
	_array = new T[0]();
	_size = 0;
}

template<class T>
Array<T> &Array<T>::operator=(const Array<T> &assign)
{
	if (this != &assign)
	{
		if (_array != nullptr)
			delete[] _array;
		_size = assign._size;
		_array = new T[_size]();
		for (unsigned int i = 0; i < size(); ++i)
			_array[i] = assign[i];
	}
	return *this;
}

template<class T>
Array<T>::Array(const Array &copy)
{
	*this = copy;
}

template<class T>
int Array<T>::size()
{
	return _size;
}


#endif
