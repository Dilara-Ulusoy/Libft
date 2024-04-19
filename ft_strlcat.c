/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakcakoc <dakcakoce@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:37:58 by dakcakoc          #+#    #+#             */
/*   Updated: 2024/04/17 10:55:32 by dakcakoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    size_t i = 0;
    size_t destlen = ft_strlen(dest);
    size_t srclen = ft_strlen(src);

    if (dstsize <= destlen)
    {
        return srclen + dstsize;
    }
    while (destlen + i + 1 < dstsize)
    {
        dest[destlen + i] = src[i];
        i++;
    }
    dest[destlen + i] = '\0';
    return (destlen + srclen);
}
/*
int main()
{
    char x[25] = "Hello";
    char y[] = "World";
    
    char a[25] = "Hello";
    char b[] = "World";
    size_t result_len1 = ft_strlcat(x, y, 2);
    size_t result_len2 = strlcat(a, b, 2);
    printf("Concatenated My string: %s\n", x); // Print the concatenated string
    printf("Concatenated Library string: %s\n", a); // Print the concatenated string
    printf("Total length my function: %zu\n", result_len1); // Print the total length
    printf("Total length library function: %zu\n", result_len2); // Print the total length
    return 0;
}
*/
