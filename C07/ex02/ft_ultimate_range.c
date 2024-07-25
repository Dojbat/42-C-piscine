/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:30:02 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/25 11:46:57 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		diff;
	int		i;
	int		*ptr;

	diff = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = (int *)malloc(sizeof(int) * diff);
	if (ptr == NULL)
	{
		range = NULL;
		return (-1);
	}
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	*range = ptr;
	return (diff);
}
