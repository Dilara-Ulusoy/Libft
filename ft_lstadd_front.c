/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakcakoc <dakcakoc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:42:03 by dakcakoc          #+#    #+#             */
/*   Updated: 2024/04/27 23:15:28 by dakcakoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst; // new->next is the address of the first element of the list
    *lst = new; // the address of the first element of the list is now the address of the new element
}
