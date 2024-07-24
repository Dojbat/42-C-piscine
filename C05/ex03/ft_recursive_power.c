/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 23:07:46 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/24 14:16:18 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (nb);
	}
	else
	{
		nb = (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}

// int main(void)
// {
//     int a;
//     a = ft_recursive_power(2,3);
//     printf ("%d", a);
// }
