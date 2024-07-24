/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:31:00 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/24 13:15:06 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		j *= i;
		i++;
	}
	return (j);
}

// int main(void)
// {
//     int nb;
//     nb = ft_iterative_factorial(5);
//     printf ("%d", nb);
// }
