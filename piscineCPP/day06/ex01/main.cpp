#include "lib.hpp"

int     main(void)
{
    void    *raw;
    Data    *data;

    raw = serialize();
    data = deserialize(raw);
    std::cout << data->s1 << std::endl;
    std::cout << data->n << std::endl;
    std::cout << data->s2 << std::endl;
    return 0;
}