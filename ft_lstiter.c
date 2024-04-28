#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if(!lst || !f)
    return ;
    while(lst)
    {
        f(lst ->content); // Apply the function to the content of the node
        lst = lst ->next; // Move to the next node
    }
}