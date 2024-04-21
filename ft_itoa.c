#include "libft.h"

static int digit_count(int n)
{
    int digit = 0;
    if (n == 0)
        return 1;
    if (n < 0)
        digit += 1;
    while (n != 0)
    {
        n = n / 10;
        digit++;
    }
    return digit;
}
char *min_int()
{
    char *result;
    result = (char *)malloc(sizeof(char) * 12);
    if (!result)
        return (NULL);
    ft_memcpy(result, "-2147483648", 12);
    return result;
}

char *ft_itoa(int n)
{
    char *result;
    int d_count;

    d_count = digit_count(n);
    result = (char *)malloc((sizeof(char) * (d_count + 1)));
    if (!result)
        return (NULL);
    result[d_count] = '\0';
    if (n == -2147483648)
            return min_int();
    if (n == 0)
        result[0] = '0';
    else if (n < 0)
        result[0] = '-';
    while (n != 0)
    {
        result[d_count - 1] = (n < 0 ? -(n % 10) : n % 10) + '0';
        n = n / 10;
        d_count--;
    }
    return result;
}

/*
int main()
{
    int num = 12345;
    printf("itoa: %s\n", ft_itoa(num));
    return 0;
}
 */

