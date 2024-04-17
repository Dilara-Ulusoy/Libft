/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakcakoc <dakcakoce@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:00:19 by dakcakoc          #+#    #+#             */
/*   Updated: 2024/03/04 09:33:49 by dakcakoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	while (src[i])
		i++;
	copy = (char *) malloc(sizeof(char) * (i + 1));
	if (!copy)
		return (0);
	ft_strcpy(copy, src);
	return (copy);
}
/*
#include <stdio.h>
int main (void)
{
    char *str;
    char *str2;
    str = "hi there";
    str2 = ft_strdup(str);
    printf("%s", str);
}*/
