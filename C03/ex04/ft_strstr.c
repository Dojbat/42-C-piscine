/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:55:29 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/22 13:39:32 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	check;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		check = 1;
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] != to_find[j] || str[i] == '\0')
			{
				check = 0;
				break ;
			}
			j++;
		}
		if (check == 1)
			return (&str[i]);
		i++;
	}
	return (0);
}
// int main(void)
// {
//     char haystack[] = "Hello the World";
//     char needle[] = "the";
//     char *a;

//     a = ft_strstr(haystack, needle);
//     printf("%s\n", a);
// }
