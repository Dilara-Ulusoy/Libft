typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL); 
    
    new_lst = NULL; // Initialize the new list to NULL 
	while (lst)  // While the list is not empty 
	{
		new_node = ft_lstnew(f(lst->content)); // Create a new node with the mapped content
		if (!new_node)
		{
            ft_lstclear(&new_lst, del); // Clear the new list
            return (NULL); // Return NULL
		}
        else
        {
            ft_lstadd_back(&new_lst, new_node); // Add the new node to the new list
		    lst = lst->next; // Move to the next node
        }
		
	}
	return (new_lst); // Return the new list
}