/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_dup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 20:27:13 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/28 20:28:37 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
/**
 * @brief Creates a copy of a string
 * starting from the first newline
 * character '\n' found in the origin
 * string.
 * 
 * @param string The source string to be copied.
 * @return char* The created string copy or
 * NULL if an error occurs.
 */
char    *gnl_dup(char *string)
{
    int     index;
    int     count;
    char    *copy_string;

    index = 0;
    while (string[index] && string[index] != '\n')
        index++;
    if (!string[index])
    {
        free(string);
        return (NULL);
    }
    copy_string = (char *)malloc(sizeof(char) *
        (ft_strlen(string) - index + 1));
    if (!copy_string)
        return (NULL);
    index++;
    count = 0;
    while (string[index])
        copy_string[count++] = string[index++];
    copy_string[count] = '\0';
    free(string);
    return (copy_string);
}
