/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:32:44 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/28 20:28:37 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Reads a string from a file specified
 * by the "fd" file descriptor and store
 * the read string in a variable.
 * 
 * @param fd The file descriptor of the file
 * to be read.
 * @param string The variable where the read
 * will be store.
 * @return char* The string read or NULL
 * on failure.
 */
char    *get_reading(int fd, char *string)
{
    int     index;
    char    *buffer;
    
    buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!buffer)
        return (NULL);
    index = 1;
    while (!ft_strchr(string, '\n') && index != 0)
    {
        index = read(fd, buffer, BUFFER_SIZE);
        if (index == -1)
        {
            free(buffer);
            return (NULL);
        }
        buffer[index] = '\0';
        string = gnl_strjoin(string, buffer);
    }
    free(buffer);
    return (string);
}
