/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ththanas <ththanas@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:59:23 by ththanas          #+#    #+#             */
/*   Updated: 2024/08/01 13:51:51 by ththanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_separator(char c, char *charset)
{
    int i;

    i = 0;
    while (charset[i] != '\0')
    {
        if (charset[i] == c)
        {
            return (1);
        }
        i++;
    }
    return (0);
}

int word_count(char *str, char *charset)
{
    int i;
    int count;
    int in_word;

    i = 0;
    count = 0;
    in_word = 0;
    while (str[i] != '\0')
    {
        if (!(is_separator(str[i], charset)))
        {
            if(!(in_word))
            {
                in_word = 1;
                count++;
            }
        }
        else
        {
            in_word = 0;
        }
        i++;
    }
    return (count);
}

char word_copy(char *str, int start, int end)
{
    char *word;
    int i;

    word = (char *)malloc(sizeof(char) * (end - start + 1));
    i = 0;
    while (start < end)
    {
        word[i++] = str[start++];
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char *str, char *charset) 
{
    int i;
    int j;
    int start;
    int word_c;
    char **result;

    i = 0;
    j = 0;
    start = -1;
    word_c = word_count(str, charset);
    result = (char **)malloc(sizeof(char *) * (word_c + 1));
    if (!result)
        return (NULL);
    while (str[i] != '\0') 
    {
        if (!is_separator(str[i], charset) && start == -1)
            start = i;
        else if (is_separator(str[i], charset) && start != -1)
            result[j++] = word_copy(str, start, i);
            start = -1;
        i++;
    }
    if (start != -1)
        result[j++] = word_copy(str, start, i);
    result[j] = NULL;
    return (result);
}