/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:36:13 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/24 15:47:05 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	temp;
	int	i;

	temp = 0;
	i = 2;
	if (nb < 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			temp++;
			break ;
		}
		i++;
	}
	if (temp == 0 && nb != 1)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	result;

	result = nb;
	while (1)
	{
		if (ft_is_prime(result))
			return (result);
		result++;
	}
}

// int main(void)
// {
//     int a;
//     a = ft_find_next_prime(6);
//     printf("%d", a);
// }
