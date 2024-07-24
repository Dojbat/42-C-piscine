/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:38:52 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/22 13:38:09 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	re;

	re = 1;
	while (*str != '\0' && re == 1)
	{
		if (*str >= 32 && *str <= 126)
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
