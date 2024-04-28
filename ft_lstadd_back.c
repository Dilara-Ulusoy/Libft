void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    if(*lst == NULL)
    {
        *lst = new;
        return;
    }
    last = *lst; // what we do here is we assign the address of the first node to last
    while(last -> next) // while the next node is not NULL
   {
    last = last -> next; // we assign the address of the next node to last
   } 
   last -> next = new; // we assign the address of the new node to the next of the last node
} //In summary, we are adding a new node to the end of the linked listß