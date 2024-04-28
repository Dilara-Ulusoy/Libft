int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while(lst)
    {
        lst = lst->next;
        count++;
    }
    return (count);
}

int main()
{
    // Create a linked list
    t_list *head = NULL;
    t_list *second = NULL;
    t_list *third = NULL;

    head = malloc(sizeof(t_list));
    second = malloc(sizeof(t_list));
    third = malloc(sizeof(t_list));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // Call the ft_lstsize function
    int size = ft_lstsize(head);

    // Print the size of the linked list
    printf("Size of the linked list: %d\n", size);

    return 0;
    
    /*
    Diyelim ki listeniz 3 eleman içeriyor: A -> B -> C -> NULL
    ft_lstsize fonksiyonu çağrıldığında, lst A'yı işaret eder ve count = 0.
    İlk döngüde, lst B'ye geçer ve count 1 olur.
    İkinci döngüde, lst C'ye geçer ve count 2 olur.
    Üçüncü döngüde, lst NULL olur ve count 3 olur. Döngü sona erer.
    Fonksiyon 3 değerini döndürür, çünkü listede 3 eleman vardir
     */
}
