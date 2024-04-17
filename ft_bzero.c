/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakcakoc <dakcakoce@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:20:30 by dakcakoc          #+#    #+#             */
/*   Updated: 2024/04/17 13:26:16 by dakcakoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
#include <strings.h>
#include <stdio.h>
int main()
{
   char x[] = "Hello";
   printf("First String: %s\n", x);
   ft_bzero(x, 5);
   bzero(x, 5);
   printf("After ft_bzero: %s\n", x); // Print x after erasing first 5 bytes
   return 0; // Return from main function
}
*/
