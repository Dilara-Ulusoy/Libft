/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakcakoc <dakcakoce@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:37:58 by dakcakoc          #+#    #+#             */
/*   Updated: 2024/04/25 15:13:46 by dakcakoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static int	ft_isspace(const char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int long	result;
	int			sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		sign = sign * (-1);
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if (sign == 1 && result < 0)
		return (-1);
	else if (sign == -1 && result < 0)
		return (0);
	return ((int) result * sign);
}
/*
int main() {
    char str[] = "9223372036854775810";
    printf("%d\n", ft_atoi(str));
    printf("%d\n", atoi(str));
    return 0;
}
*/
