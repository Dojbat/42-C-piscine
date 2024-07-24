/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:38:22 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/22 13:54:53 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	arr[10];
	int		len;
	int		num;

	len = 0;
	if (nb < 0)
		write(1, "-", 1);
	if (nb == 0)
		write(1, "0", 1);
	while (nb != 0)
	{
		num = nb % 10;
		if (num < 0)
			num *= (-1);
		arr[len++] = '0' + num;
		nb /= 10;
	}
	while (len > 0)
	{
		write(1, &arr[--len], 1);
	}
}
