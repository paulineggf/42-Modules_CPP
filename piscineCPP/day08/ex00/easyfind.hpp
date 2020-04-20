#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>

template<typename T>
int     easyfind(T tab, int nb)
{
    int     i;
    int     size;

    i = 0;
    size = tab.size();
    while (i < size)
    {
        if (tab[i] == nb)
            return i;
        i++;
    }
    throw std::exception();
}

#endif