#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iterator>
#include <list>
#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	private:
	std::list<T>		_stack;
	
    public:	
	MutantStack() {}
	MutantStack(MutantStack const &copy)
	{
		_stack = copy._stack;
	}

	~MutantStack() {}

	MutantStack &operator=(MutantStack const &rhs)
	{
		_stack = rhs._stack;
		return *this;
	}

	T	top()
	{
        this->stack::top();
	    return (_stack.front());
	}

	T	size(void)
	{
		return (_stack.size());
	}

	typedef typename std::list<T>::iterator iterator;

	iterator begin()
	{
		return (_stack.begin());
	}

	iterator end()
    {
		return (_stack.end());
	}

	void push(T value)
	{
        this->stack::push(value);
		_stack.push_front(value);
	}

	void pop(void)
	{
        this->stack::pop();
	    _stack.pop_front();
	}
};

#endif