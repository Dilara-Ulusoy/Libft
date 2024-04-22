/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakcakoc <dakcakoce@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:37:58 by dakcakoc          #+#    #+#             */
/*   Updated: 2024/04/22 11:47:26 by dakcakoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char x[25] = "Hello";
    char y[] = "World";
    printf("First My string: %s\n", x);
    int result_len = ft_strlcpy(x, y, 25);
    printf("Copied My string: %s\n", x);
    printf("Lenght: %d\n", result_len);
    
    char a[25] = "Hello";
    char b[] = "World";
    printf("Library First string: %s\n", a);
    int result_len1 = strlcpy(a, b, 25);
    printf("Library Copied string: %s\n", a);
    printf("Lenght: %d\n", result_len1);
    return 0;
}
 */
