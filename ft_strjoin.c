/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakcakoc <dakcakoce@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:26:30 by dakcakoc          #+#    #+#             */
/*   Updated: 2024/03/06 11:53:37 by dakcakoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_findtotallen(int size, char **strs, char *sep)
{
	int	i;
	int	totallen;
	int	seplen;

	totallen = 0;
	i = 0;
	seplen = ft_strlen(sep);
	while (i < size)
	{
		totallen += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			totallen += seplen;
		}
		i++;
	}
	return (totallen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		totallen;
	char	*output;

	totallen = ft_findtotallen(size, strs, sep) + 1;
	if (size <= 0)
		return (0);
	output = (char *)malloc(totallen);
	if (output == 0)
		return (0);
	i = 0;
	output[0] = '\0';
	while (i < size)
	{
		ft_strcat(output, strs[i]);
		if (i < size - 1)
			ft_strcat(output, sep);
		i++;
	}
	return (output);
}
/*
#include <stdio.h>
int main() {
    char *strs[] = {"Apple", "Orange", "Plum", "Banana"};
    char *sep = "|";
    char *result = ft_strjoin(4, strs, sep);
    printf("%s\n", result);
    free(result);
    return 0;
}*/
