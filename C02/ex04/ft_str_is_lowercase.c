/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:19:25 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/22 11:48:28 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	re;

	re = 1;
	while (*str != '\0' && re == 1)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			re = 1;
		}
		else
		{
			re = 0;
			break ;
		}
		str++;
	}
	return (re);
}
