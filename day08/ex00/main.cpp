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
        std::cout << easyfind(tab, 7) << std::endl;
        std::cout << easyfind(tab, 1) << std::endl;
        // std::cout << easyfind(tab, 9) << std::endl;
        std::cout << easyfind(tab2, 7) << std::endl;
        std::cout << easyfind(tab2, 1) << std::endl;
        std::cout << easyfind(tab2, 9) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}