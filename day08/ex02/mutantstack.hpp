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
	
	typedef typename std::list<T>::iterator iterator;
	
	MutantStack();
	MutantStack(MutantStack const &copy);
	~MutantStack();

	MutantStack &operator=(MutantStack const &rhs);

	T			top();
	T			size(void);
	void 		push(T value);
	void 		pop(void);
	iterator 	begin();
	iterator 	end();
};

# include "mutantstack.tpp"

#endif
