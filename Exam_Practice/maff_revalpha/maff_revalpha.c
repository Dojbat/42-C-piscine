/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:14:12 by ththanas          #+#    #+#             */
/*   Updated: 2024/08/01 14:17:42 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
    char odd;
    char even;

    odd = 'z';
    even = 'Y';

    while (odd >= 'b' && even >= 'A')
    {
        write (1, &odd, 1);
        write (1, &even, 1);
        odd -= 2;
        even -= 2;
    }
    write (1,"\n", 1);
    return (0);
}