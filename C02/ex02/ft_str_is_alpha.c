/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:13:11 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/22 10:56:34 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	re;

	re = 1;
	while (*str != '\0' && re == 1)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
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
