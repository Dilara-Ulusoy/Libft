/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakcakoc <dakcakoce@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:32:41 by dakcakoc          #+#    #+#             */
/*   Updated: 2024/02/25 13:33:04 by dakcakoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	ft_strncmp(const char *s1, char *s2, size_t n)
{
	size_t	i;
	size_t	diff;

	i = 0;
	while (i < n)
	{
		diff = s1[i] - s2[i];
		if (diff != 0 || s1[i] == '\0')
			return (diff);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

 int main()
 {
     char x[]= "Hello";
     char y[]= "Apple";
     printf("My function: %d\n",ft_strncmp(x,y, 5));
     
    char a[]= "Hello";
     char b[]= "Apple";
     printf("Library function: %d",strncmp(a,b, 5));
     
 }
 */
