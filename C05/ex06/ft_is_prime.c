/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:27:23 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/24 15:33:14 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
