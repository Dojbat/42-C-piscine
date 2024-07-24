/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 23:13:04 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/24 14:25:48 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1 || index == 2)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

// int main(void)
// {
//     int index;
//     int result;
//     index = 0;
//     while (index <= 10)
//     {
//         result = ft_fibonacci(index);
//         printf("Fibonacci of %d is %d\n", index, result);
//         index++;
//     }
//     return (0);
// }
