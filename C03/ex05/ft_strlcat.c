/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:44:03 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/22 12:57:13 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	count_len(char *c)
{
	unsigned int	count;

	count = 0;
	while (*c != '\0')
	{
		count++;
		c++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = count_len(dest);
	src_len = count_len(src);
	while (src[i] != '\0' && dest_len + i < size -1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	if (size == 0)
		return (src_len);
	if (dest_len > size)
		return (src_len + size);
	return (src_len + dest_len);
}
