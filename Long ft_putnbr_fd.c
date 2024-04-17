#include <unistd.h>

int	ft_strlen(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - start);
}

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}


void ft_putnbr_fd(int n, int fd)
{
    char digit;
    if(n == -2147483648)
    {
        ft_putstr_fd("-2147483648", fd);
    }
    
    if(n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    if(n >= 10)
    {
        ft_putnbr_fd(n/10, fd);
    }
   digit = (n % 10) + '0';
   ft_putchar_fd(digit, fd);
}
int main()
{
    int fd = 1;
    ft_putnbr_fd(42,fd);
}
