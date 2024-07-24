/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:20:23 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/24 16:41:12 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = argc;
	if (argc >= 2)
	{
		while (--j > 0)
		{
			while (argv[j][i] != '\0')
			{
				write (1, &argv[j][i], 1);
				i++;
			}
			i = 0;
			write (1, "\n", 1);
		}
	}
	return (0);
}
