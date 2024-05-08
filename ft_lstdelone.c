#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst) // if the list is not empty
    {
        del(lst->content); // delete the content of the node using the function passed as an argument
        free(lst); // free the memory of the node
    }
}
/*
This function deletes and frees the memory of the single node.
First we delete the content of the node.
Then we free the memory of the node.
*/
