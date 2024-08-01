/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:08:14 by ththanas          #+#    #+#             */
/*   Updated: 2024/08/01 15:30:30 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int count_alpha(char c)
{
    int count;

    if (c >= 'A' && c <= 'Z')
    {
        count = c - 'A' + 1;
    }
    else if (c >= 'a' && c <= 'z')
    {
        count = c - 'a' + 1;
    }
    else 
    {
        count = 1;
    }
    return (count);
}

int main(int ac, char **av)
{
    int repeat;

    
    if (ac == 2)
    {
        while (*av[1])
        {
            repeat = count_alpha(*av[1]);
            while (repeat--)
            {
                write (1, av[1], 1);
            }
            av[1]++;
        }
    }
    write (1, "\n", 1);
}