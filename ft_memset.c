/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakcakoc <dakcakoce@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:31:19 by dakcakoc          #+#    #+#             */
/*   Updated: 2024/04/16 15:39:34 by dakcakoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	v;
	size_t			i;

	p = (unsigned char *)b;
	v = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		p[i] = v;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
int main()
{
   char str[40] = "This is an example sentence";
   printf("Normal String = %s\n\n", str);
   ft_memset(str, '!', 5);
   printf("String after memset =  %s\n",str);
   return 0;
}
 */
