/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakcakoc <dakcakoce@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:49:53 by dakcakoc          #+#    #+#             */
/*   Updated: 2024/04/29 11:08:00 by dakcakoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 0;
	while (*s)
	{
		if (*s != c && !is_word)
		{
			is_word = 1;
			count++;
		}
		else if (*s == c)
			is_word = 0;
		s++;
	}
	return (count);
}

static char	**malloc_list(int word_count)
{
	char	**list;

	list = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!list)
		return (NULL);
	return (list);
}

static char	*get_next_word(const char *s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	word[len] = '\0';
	return (word);
}

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int		word_count;
	char	**list;
	char	*word;
	int		i;
	int		k;

	i = 0;
	k = 0;
	word_count = count_words(s, c);
	list = malloc_list(word_count);
	while (s[i])
	{
		if (s[i] != c)
		{
			word = get_next_word(s + i, c);
			if (!word)
			{
				ft_free(list, k);
				return (NULL);
			}
			list[k++] = word;
			i = i + ft_strlen(word);
		}
		i++;
	}
	list[k] = NULL;
	return (list);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *str = "Hello,World,This,Is,Sparta";
    char **result = ft_split(str, ',');
    int i = 0;
    if (result == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    // Print the result
    while (result[i])
    {
        printf("%s\n", result[i]);
        free(result[i]); 
        i++;
    }
    free(result);
    return 0;
}*/
