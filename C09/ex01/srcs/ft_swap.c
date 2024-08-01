/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:13:11 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/16 10:19:06 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	num3;

	num3 = *a;
	*a = *b;
	*b = num3;
}
// int main(void)
// {
//     int* num1;
//     int* num2;
//     int a;
//     int b;

//     a = 48;
//     b = 57;
//     num1 = &a;
//     num2 = &b;
//     ft_swap (num1, num2);
//     write (1, &a, 1);
//     write (1, "\n", 1);
//     write (1, &b, 1);
//     return (0);
// } 
