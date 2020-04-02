#include "List.hpp"

t_List    *lstNew(void *content)
{
    t_List    *nv;

    nv = new t_List;
    nv->content = content;
    nv->next = 0;
    return (nv);
}

t_List    *lstLast(t_List *lst)
{
    if (!lst)
        return (0);
    while (lst->next)
        lst = lst->next;
    return (lst);    
}

void    lstAddBack(t_List **alst, t_List *nv)
{
    if (!alst)
        return ;
    if (!*alst)
        *alst = nv;
    else
        lstLast(*alst)->next = nv;
}

void    *lstGetContent(t_List *alst, int j)
{
    int     i;

    i = 0;
    while (i < j)
    {
        alst = alst->next;
        i++;
    }
    return alst->content;
}

void    lstClear(t_List *lst)
{
   t_List *tmp;

    if (!lst)
        return ;
    while (lst)
    {
        tmp = lst;
        delete (ISpaceMarine*)lst->content;
        delete lst;
        lst = tmp->next;
    }
}
