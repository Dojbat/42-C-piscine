/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:42:12 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/24 17:23:53 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	collect;

	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		collect = 0;
	}
	else
	{
		collect = *s1 - *s2;
	}
	return (collect);
}

void	ft_sort(int size, char *arr[])
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(arr[j], arr[i]) < 0)
			{
				swap = arr[j];
				arr[j] = arr[i];
				arr[i] = swap;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	if (argc > 1)
	{
		ft_sort(argc, argv);
		while (j < argc)
		{
			while (argv[j][i] != '\0')
			{
				write (1, &argv[j][i], 1);
				i++;
			}
			i = 0;
			write (1, "\n", 1);
			j++;
		}
	}
	return (0);
}
