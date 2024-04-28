typedef struct  s_list
{
    void    *content;
    struct  s_list *next;
}               t_list;

t_list  *ft_lstlast(t_list *lst)
{
    t_list  *last;

    last = lst;
    if (last)
    {
        while (last->next)
            last = last->next;
    }
    return (last);

}
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    // Creating a linked list with three nodes
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    // Assigning content to the nodes
    node1->content = "Node 1";
    node1->next = node2;
    node2->content = "Node 2";
    node2->next = node3;
    node3->content = "Node 3";
    node3->next = NULL;

    // Testing ft_lstlast function
    t_list *last = ft_lstlast(node1);
    printf("Last node content: %s\n", (char *)last->content);

    // Freeing the memory
    free(node1);
    free(node2);
    free(node3);

    return (0);
}
