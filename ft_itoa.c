
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static int digit_count(int n)
{
    int digit = 0;
    if (n == 0)
        digit = 1;
    if (n < 0)
        digit += 1;
    while (n != 0)
    {
        n = n / 10;
        digit++;
    }
    return (digit);
}
char *ft_itoa(int n)
{
    char *result;
    int d_count;

    d_count = digit_count(n);
    result = (char *)malloc((sizeof(char) * (d_count + 1)));
    if (!result)
        return (NULL);
    if (n == 0)
        result[0] = '0';
    result[d_count] = '\0';
    if (n < 0)
    {
        n = -n;
        result[0] = '-';
    }
    while (n != 0)
    {
        result[d_count - 1] = n % 10 + '0';
        n = n / 10;
        d_count--;
    }
    return (result);
}
/*
int main()
{
    int num = 12345;
    printf("itoa: %s\n", ft_itoa(num));
    return 0;
}
*/
