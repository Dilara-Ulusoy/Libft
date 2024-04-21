
//Her bir sayiyi rakam olarak al 
// Sayinin uzunlugunda array buffer olustur
//Rakamlari buffer'a ekle
//While dongusunde her bir rakama '0' ekle ve ascii'de rakamin karsiligi harfi bul.

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	digit = nb % 10 + '0';
	write(1, &digit, 1);
}

char *itoa(int num, char *buffer, int base)
{
    int current = 0;
    int isNegative = 0;

    // Handle 0 explicitely, otherwise empty string is printed
    if (num == 0) {
        buffer[current++] = '0';
        buffer[current] = '\0';
        return buffer;
    }

    // Handle negative numbers
    if (num < 0 && base == 10) {
        isNegative = 1;
        num = -num;
    }

    // Process individual digits using ft_putnbr
    ft_putnbr(num);

    // Convert the result of ft_putnbr to string
    while (num != 0) {
        buffer[current++] = num % 10 + '0';
        num = num / 10;
    }

    // If number is negative, append '-'
    if (isNegative)
        buffer[current++] = '-';

    buffer[current] = '\0'; // Append string terminator

    // Reverse the string
    int start = 0;
    int end = current - 1;
    while (start < end) {
        char temp = buffer[start];
        buffer[start] = buffer[end];
        buffer[end] = temp;
        start++;
        end--;
    }

    return buffer;
}

int main() {
    int num = -12345;
    int base = 10;
    char buffer[50];
    printf("itoa: %s\n", itoa(num, buffer, base));
    return 0;
}
