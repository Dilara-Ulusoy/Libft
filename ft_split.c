#include "libft.h"
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
*/

static int count_words(const char *s, char c) {
    int count = 0;
    int is_word = 0;

    while (*s)
    {
        if (*s != c && !is_word) {
            is_word = 1;
            count++;
        } else if (*s == c) {
            is_word = 0;
        }
        s++;
    }
    return count;
}

static char **malloc_list(int word_count)
{
    char **list = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!list)
        return NULL;
    return list;
}

char **ft_split(char const *s, char c)
{
    int word_count; // Count the number of words
    int i = 0;
    int k = 0;
    int j;
    char **list;
    char *word;
    
    word_count = count_words(s, c);
    list = malloc_list(word_count);
    while (s[i])
    {
        if (s[i] != c)
        {
            j = i;
            while (s[j] && s[j] != c)
                j++;
            word = (char *)malloc(sizeof(char) * (j - i + 1));
            if (!word)
                return NULL;
            j = 0;
            while (s[i] && s[i] != c)
                word[j++] = s[i++];
            word[j] = '\0'; // Null terminate the word*/
            list[k++] = word; // Add the word to the outcome array
        }
        else
            i++;
    }
    list[k] = NULL; // Null terminate the outcome array
    return list;
}
/*
int main(void)
{
    char *str = "Hello,World,This,Is,Sparta";
    char **result = ft_split(str, ',');
    int i = 0;
    // Print the result
    while (result[i])
    {
        printf("%s\n", result[i]);
        free(result[i]); // Free memory
        i++;
    }
    free(result); // Free memory
    return 0;
}*/
