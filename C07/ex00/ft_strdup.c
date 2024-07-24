/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 23:57:06 by ththanas          #+#    #+#             */
/*   Updated: 2024/07/24 23:57:06 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

char *ft_strdup(char *src)
{
    char *dest;
    int len;
    int i;
    i = 0;
    len = 0;
    while (src[len] != '\0')
        len++;
    dest = (char *)malloc(sizeof(char) * (len + 1));
    if (dest == 0)
    {
        return (0);
    }
    while (i < len)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}

// int main(void)
// {
//     char a[] = "Hello World";
//     char *b;
//     b = ft_strdup(a);
//     printf ("%s", b);
// }