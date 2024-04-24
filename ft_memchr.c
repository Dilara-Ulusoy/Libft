/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakcakoc <dakcakoce@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:51:37 by dakcakoc          #+#    #+#             */
/*   Updated: 2024/04/24 10:32:15 by dakcakoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		b;
	size_t				i;

	str = (const unsigned char *)s;
	b = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == b)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	if (b == '\0')
	{
		return ((void *)&str[i]);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
#include <stddef.h>
int main()
{
    char str[] = "My name is Dilara-";
    printf("My function: %s\n", ft_memchr(str, 'a',5));

    char str2[] = "My name is Dilara-";
    printf("Library function: %s", memchr(str2, 'a', 5));
    return 0;
}*/
