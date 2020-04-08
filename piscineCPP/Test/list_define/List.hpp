#ifndef LIST_HPP
# define LIST_HPP

# include <iostream>
# include "IList.hpp"

typedef struct      s_List
{
    void            *content;
    struct s_List   *next;
}                   t_List;

void                lstAddBack(t_List **alst, t_List *nv);
t_List              *lstLast(t_List *lst);
t_List              *lstNew(void *content);
void                *lstGetContent(t_List *alst, int j);
int                 lstClear(t_List *alst);
void                lstDelOne(t_List **alst, int idx);
int		            lstSize(t_List *lst);

#endif
