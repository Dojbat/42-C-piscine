/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:19:28 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/25 10:48:07 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	range;
	int	i;

	range = max - min;
	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	if (range == 0)
		return (0);
	result = (int *)malloc((sizeof(int) * range));
	if (result == 0)
		return (0);
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
