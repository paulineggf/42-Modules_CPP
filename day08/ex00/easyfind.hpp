#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>
# include <algorithm>

template<typename T>
int     easyfind(T tab, int nb)
{
    typename T::iterator it;

    it = find(tab.begin(), tab.end(), nb);
    if (it != tab.end())
        std::cout << "Element found in container: " << *it << '\n';
    else
        throw std::exception();
    return 0;
}

#endif