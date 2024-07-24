/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:47:02 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/22 11:46:38 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	unsigned int	h;
	unsigned int	l;
	unsigned char	*word;
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	word = (unsigned char *)str;
	while (str[i] != '\0')
	{
		if (word[i] >= 32 && word[i] <= 126)
		{
			write (1, &word[i], 1);
		}
		else
		{
			h = word[i] / 16;
			l = word[i] % 16;
			write (1, "\\", 1);
			write (1, &hex[h], 1);
			write (1, &hex[l], 1);
		}
		i++;
	}
}
