/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:09:31 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/30 16:46:38 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_str_len(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_str_dup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = ft_str_len(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == 0)
	{
		return (0);
	}
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	if (tab == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		tab[i].size = ft_str_len(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_str_dup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
