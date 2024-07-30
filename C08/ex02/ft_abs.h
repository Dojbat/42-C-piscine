/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:14:17 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/30 13:29:29 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	abs(int num)
{
	if (num < 0)
	{
		return (num *= -1);
	}
	return (num);
}

# define ABS(Value) (abs(Value))
#endif
