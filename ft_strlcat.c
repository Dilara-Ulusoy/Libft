
size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i = 0;
    size_t j = 0;
    size_t totallen = ft_strlen(dest) + ft_strlen(src);;

    while (dest[i] != '\0' && i < size) {
        i++;
    }
    if (i == size) {
        return ft_strlen(dest) + size;
    }
    while (src[j] != '\0' && i + j + 1 < size) {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return totallen;
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
