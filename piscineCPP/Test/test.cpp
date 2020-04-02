#include <iostream>

int     main()
{
    int *pNumber{new int(16)};
    int *tab{new int[100]};

    std::cout << *pNumber << std::endl;
    delete pNumber;
    delete [] tab;
    return 0;
}