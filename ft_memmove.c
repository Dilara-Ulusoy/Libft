
void *ft_memmove(void *dst, const void *src, size_t len) {
    unsigned char *str1 = (unsigned char *)dst;
    const unsigned char *str2 = (const unsigned char *)src;

   if (!dst && !src)
        return (NULL);
   
    if (str1 < str2) {
        // Copy forwards if dest is before src
        size_t i = 0;
        while (i < len) {
            str1[i] = str2[i];
            i++;
        }
    } else {
        // Copy backwards if dest is after src
        while (len > 0) {
            len--;
            str1[len] = str2[len];
        }
    }
    return dst; // Return the original destination pointer
}
/*
#include <stdio.h>
#include <string.h>
int main() {
    char dest[] = "Hello World!";

    printf("Before ft_memmove string: %s\n", dest);
    ft_memmove(dest, dest+2 , 9);
    printf("After ft_memmove string: %s\n\n", dest);;
    
    char dest1[] = "Hello World!";
    
    printf("Before library memmove string: %s\n", dest1);
    memmove(dest1, dest1+2 , 9);
    printf("After library memmove string: %s\n\n", dest1);;

    return 0;
}
*/
