#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &copy)
{
	_stack = copy._stack;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &rhs)
{
	_stack = rhs._stack;
	return *this;
}

template <typename T>
void		MutantStack<T>::pop(void)
{
	this->stack::pop();
	_stack.pop_front();
}

template <typename T>
void MutantStack<T>::push(T value)
{
	this->stack::push(value);
	_stack.push_front(value);
}

template <typename T>
typename MutantStack<T>::iterator 	MutantStack<T>::end()
{
	return (_stack.end());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (_stack.begin());
}

template <typename T>
T	MutantStack<T>::size(void)
{
	return (_stack.size());
}

template <typename T>
T	MutantStack<T>::top()
{
	this->stack::top();
	return (_stack.front());
}
