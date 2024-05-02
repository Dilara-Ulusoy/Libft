/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakcakoc <dakcakoce@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:58:13 by dakcakoc          #+#    #+#             */
/*   Updated: 2024/04/29 13:58:22 by dakcakoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
int main ()
{
    t_list *node1;
    t_list *node2;
    
 node1 =(t_list *)malloc * (sizeof(t_list));
 node2 = (t_list *)malloc * (sizeof(t_list));

node1 -> content = "Node 1;
node1 -> next = node2;
node2  -> next = NULL;
   
