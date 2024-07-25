/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:08:39 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/25 15:36:15 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

#define FT_BOOLEAN_H

#include <unistd.h>
#define SUCCESS 0

#define TRUE 1
#define FALSE 0

#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"

typedef int t_bool;

# define EVEN(var) (var % 2) //var stand for variable without any data type. || var % 2 is find the remainder

#endif