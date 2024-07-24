/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:23:59 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/24 13:05:59 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

int	is_valid(char *base)
{
	int	len;
	int	i;
	int	j;

	len = ft_strlen(base);
	i = 0;
	if (len < 2)
		return (0);
	while (i < len)
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_put_base_rec(int nb, char *base, int len)
{
	if (nb >= len)
		ft_put_base_rec (nb / len, base, len);
	ft_putchar(base[nb % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (!(is_valid(base)))
	{
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	ft_put_base_rec(nbr, base, len);
}

// int main() {
//     char base[] = "0123456789";
//     int number = 42;
//     ft_putnbr_base(number, base);
//     return 0;
// }
