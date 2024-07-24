/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:25:23 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/22 13:38:12 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	re;

	re = 1;
	while (*str != '\0' && re == 1)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			re = 1;
		}
		else
		{
			re = 0;
		}
		str++;
	}
	return (re);
}
