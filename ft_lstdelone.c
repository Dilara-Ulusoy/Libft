void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst) // if the list is not empty
    {
        del(lst->content); // delete the content of the node using the function passed as an argument
        free(lst); // free the memory of the node
    }
}