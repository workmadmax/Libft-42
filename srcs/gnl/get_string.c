/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:42:33 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/27 20:27:04 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Creates a copy of a string up to the
 * first newline character '\n'
 * found in the str.
 * 
 * @param string The string to be copied.
 * @return char* The created string copy
 * or NULL if an error occurs.
 */
char    *get_string(char *string)
{
    int     index;
    char    *buffer;

    index = 0;
    if (!string)
        return (NULL);
    while (string[index] && string[index] != '\n')
        index++;
    buffer = (char *)malloc(sizeof(char) * (index + 2));
    if (!buffer)
        return (NULL);
    index = 0;
    while (string[index] && string[index] != '\n')
    {
        buffer[index] = string[index];
        index++;
    }
    if (string[index] == '\n')
    {
        buffer[index] = string[index];
        index++;
    }
    buffer[index] = '\0';
    return (buffer);
}
