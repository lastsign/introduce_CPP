#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <deque>
# include <iostream>

template<class T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(const MutantStack<T> &copy);
	MutantStack &operator=(const MutantStack<T> & assign);
	~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	iterator begin();
	iterator end();
	reverse_iterator rbegin();
	reverse_iterator rend();
};

template<class T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template<class T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy)
{
	*this = copy;
}

template<class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &assign)
{
	if (*this != assign)
		std::stack<T>::operator=(assign);
	return *this;
}

template<class T>
MutantStack<T>::~MutantStack()
{

}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return std::stack<T>::c.begin();
}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return std::stack<T>::c.end();
}

template<class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return std::stack<T>::c.rbegin();
}

template<class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return std::stack<T>::c.rend();
}

#endif
