#ifndef LIST_HPP
# define LIST_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

typedef struct      s_List
{
    void            *content;
    struct s_List   *next;
}                   t_List;

void                lstAddBack(t_List **alst, t_List *nv);
t_List              *lstLast(t_List *lst);
t_List              *lstNew(void *content);
void                *lstGetContent(t_List *alst, int j);
void                lstClear(t_List *alst);

#endif
