#include <iostream>

template<class T>
void    iter(T *array, int size, void (*f)(T&))
{
    int     i;
    
    i = 0;
    while (i < size)
    {
        f(array[i]);
        i++;
    }
}

template<class T>
void    showPlusOne(T &i)
{
    i += 1;
}

template<class T>
void    showStr(T &i)
{
    std::cout << i << std::endl;
}

template<class T>
void    appendYO(T &i)
{
    i.append("YO");
}

int     main(void)
{
    int         tab[4] = {0, 1, 2, 3};
    std::string str[4] = {"0", "1", "2", "3"};

    iter(tab, 4, &showPlusOne);
    for (int i = 0; i < 4; i++)
        std::cout << tab[i] << std::endl;
    iter(str, 4, &showStr);
    iter(str, 3, &appendYO);
    for (int i = 0; i < 4; i++)
        std::cout << str[i] << std::endl;
    return 0;
}