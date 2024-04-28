typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;
	void	*mapped_content; 

	if (!lst || !f)
		return (NULL); 
    
    new_lst = NULL;
	while (lst) 
	{
		mapped_content = f(lst->content); // Apply the function to the content of the node
		node = ft_lstnew(mapped_content); // Create a new node with the mapped content
		if (!node)
		{
			del(mapped_content); // Delete the content of the node
            ft_lstclear(&new_lst, del); // Clear the new list
            return (NULL); // Return NULL
		}
        else
        {
            ft_lstadd_back(&new_lst, node); // Add the new node to the end of the new list
		    lst = lst->next; // Move to the next node
        }
		
	}
	return (new_lst); // Return the new list
}