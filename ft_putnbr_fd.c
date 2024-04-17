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
/*
int main()
{
    int fd = 1;
    ft_putnbr_fd(42,fd);
}
*/
