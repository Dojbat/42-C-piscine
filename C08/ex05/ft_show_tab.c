/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:26:54 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/30 16:25:26 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <unistd.h>

void	ft_put_char(char c)
{
	write (1, &c, 1);
}

void	ft_put_nbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_put_char('-');
		ft_put_char('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_put_char('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_put_nbr(nb / 10);
	}
	ft_put_char((nb % 10) + '0');
}

void	ft_put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_put_char(str[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = -1;
	while (par[i++].str != 0)
	{
		ft_put_str(par[i].str);
		ft_put_char('\n');
		ft_put_nbr(par[i].size);
		ft_put_char('\n');
		ft_put_str(par[i].copy);
		ft_put_char('\n');
	}
}
