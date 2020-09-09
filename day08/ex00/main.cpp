#include <iostream>
#include <vector>
#include <deque>
#include "easyfind.hpp"

int     main(void)
{
    std::vector<int> tab(8, 0);
    std::deque<int>   tab2(8, 0);   
    int              i;

    i = 0;
    while (i < 8)
    {
        tab[i] = i;
        tab2[i] = i;
        i++;
    }
    try
    {
        easyfind(tab, 7);
        easyfind(tab, 1);
        // easyfind(tab, 9);
        easyfind(tab2, 7);
        easyfind(tab2, 1);
        easyfind(tab2, 9);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}