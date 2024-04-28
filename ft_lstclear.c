#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp; // Geçici bir liste elemanı oluşturuyoruz

    if (!lst || !del) // Eğer liste ya da silme işlevi boşsa, yani hiçbir şey yapılacak şey yoksa
        return ; // Fonksiyonu burada sonlandırıyoruz

    while (*lst) // Listenin sonuna kadar ilerleyeceğiz
    {
        tmp = (*lst)->next; // Geçici liste elemanına, listenin bir sonraki elemanının adresini atıyoruz
        del((*lst)->content); // Listenin şu anki elemanının içeriğini silmek için belirtilen silme işlevini kullanıyoruz
        free(*lst); // Listenin şu anki elemanının belleğini serbest bırakıyoruz
        *lst = tmp; // Liste başını bir sonraki elemana taşıyoruz
    }

    *lst = NULL; // Tüm elemanları sildikten sonra liste artık boş olduğu için, listeyi NULL olarak işaretliyoruz
}
