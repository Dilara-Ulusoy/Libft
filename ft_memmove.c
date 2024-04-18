#include <stdio.h>
#include <string.h>

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

int main() {
    char dest1[] = "oldstring";
    const char src1[]  = "newstring";

    printf("Before ft_memmove dest = %s, src = %s\n", dest1, src1);
    ft_memmove(dest1, src1, 9);
    printf("After ft_memmove dest = %s, src = %s\n\n", dest1, src1);
    
    char dest2[] = "oldstring";
    const char src2[]  = "newstring";
    
    printf("Before memmove dest = %s, src = %s\n", dest2, src2);
    memmove(dest2, src2, 9);
    printf("After memmove dest = %s, src = %s\n\n", dest2, src2);

    return 0;
}
