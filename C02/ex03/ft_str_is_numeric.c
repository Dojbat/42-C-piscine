/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:50:41 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/22 11:48:28 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	re;

	re = 1;
	while (*str != '\0' && re == 1)
	{
		if (*str >= '0' && *str <= '9')
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
