t_list *ft_lstnew(void *content)
{
  t_list *new_node;

  new_node =(t_list *)malloc(sizeof(t_list));
  if(!new_node)
    return (NULL);
  new_node ->content = content;
  new_node ->next = NULL;
  return(new_node);
}
*/
int main()
{
    int data = 42;
    t_list *node = ft_lstnew(&data);

    if (node == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    printf("Address of the node: %p\n", (void *)node);
    printf("Content of the node: %d\n", *((int *)node->content));

    free(node);

    return (0);
}
