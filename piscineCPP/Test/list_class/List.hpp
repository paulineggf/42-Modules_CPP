#ifndef LIST_HPP
# define LIST_HPP

# include <iostream>
# include "IList.hpp"

class           List
{
    private:
    void        *_content;
    List        *_next;
    
    public:
    List();
    ~List();

    void        addBack(List *nv);
    List        *last();
    List        *lstNew(void *content);
    void        *getContent(int j);
    void        clear();
    void        delOne(int idx);
};


#endif
