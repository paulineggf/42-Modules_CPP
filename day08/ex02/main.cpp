#include <iostream>
#include "mutantstack.hpp"

int main()
{
    std::cout << "Verifie l'iterateur" << std::endl;

	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

    std::cout << "Verifie si on peut copier directement dans une stack" << std::endl;
	std::stack<int> s(mstack);

    while (!s.empty())
    {
	    std::cout << s.top() << std::endl;
        s.pop();
    }

    std::cout << "Verifie le constructeur de copie" << std::endl;
    MutantStack<int>	mstack3;
    mstack3 = mstack;
	MutantStack<int>::iterator it3 = mstack.begin();
	MutantStack<int>::iterator ite3 = mstack.end();
	++it3;
	--it3;

	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}

    std::cout << "Verifie si ça marche pour une autre classe (double)" << std::endl;

	MutantStack<double>	mstack2;

	mstack2.push(5.2);
	mstack2.push(17.2);
	std::cout << mstack2.top() << std::endl;
	mstack2.pop();
	std::cout << mstack2.size() << std::endl;
	mstack2.push(3.2);
	mstack2.push(5.2);
	mstack2.push(737.2);
	//[...]
	mstack2.push(0.2);

	MutantStack<double>::iterator it2 = mstack2.begin();
	MutantStack<double>::iterator ite2 = mstack2.end();
	++it2;
	--it2;

	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	std::stack<double> s2(mstack2);

    while (!s2.empty())
    {
	    std::cout << s2.top() << std::endl;
        s2.pop();
    }
	return 0;
}