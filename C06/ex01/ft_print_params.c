/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:05:16 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/24 17:11:26 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 0;
    j = 1;
    if (argc >= 2)
    {
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