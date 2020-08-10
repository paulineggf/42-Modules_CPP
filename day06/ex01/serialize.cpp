#include "lib.hpp"

void    *serialize(void)
{
    char    *ret = new char[(sizeof(char) * 17) + sizeof(int)];
   
    int i = 0;
    while (i < (sizeof(char) * 8))
        ret[i++] = '1';
    *((int*)(ret + i)) = 9;
    i += sizeof(int);
    int j = 0;
    while (j < (sizeof(char) * 8))
        ret[i + j++] = '2';
    ret[i + j] = '\0';
    return ret;
}

Data    *deserialize(void *raw)
{
    struct Data     *data = new struct Data;
    const char      *sp = (const char*)raw;

    data->s1.assign(sp, 8);
    data->n = *((int*)(sp + 8));
    data->s2.assign(sp + 12, 8);
    return data;
}