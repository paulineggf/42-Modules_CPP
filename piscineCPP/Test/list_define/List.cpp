#include "List.hpp"

t_List    *lstNew(void *content)
{
    t_List    *nv;

    nv = new t_List;
    nv->content = content;
    nv->next = nullptr;
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

int    lstClear(t_List *lst)
{
   t_List *tmp;

    if (lst == nullptr)
        return 0;
    while (lst)
    {
        tmp = lst->next;
        delete (IList*)(lst->content);
        delete lst;
        lst = nullptr;
        lst = tmp;
    }
    lst = nullptr;
    return 1;
}

int		lstSize(t_List *lst)
{
	int		i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void    lstDelOne(t_List **alst, int idx)
{
    int     i;
    t_List  *tmp;
    t_List  *tmp2;

    i = 0;
    if (!alst || !*alst)
        return ;
    tmp = *alst;
    if (idx == 0)
    {
        *alst = (*alst)->next;
    }
    else if (idx == 1 && lstSize(*alst) == 2)
        tmp = tmp->next;
    else
    {
        while (tmp && i != idx - 1)
        {
            tmp = tmp->next;
            i++;
        }
        tmp2 = tmp->next;
        tmp->next = tmp2->next;
    }
}