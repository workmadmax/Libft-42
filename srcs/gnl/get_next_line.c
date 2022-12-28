/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:54:46 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/28 20:28:37 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
/**
 * @brief Reads a line from a file descriptor
 * 
 * @param fd file descriptor to read.
 * @return Return a string including \\n if is a line.
 * In case of the file dont have \\n return
 * a string without \\n, NULL if the file is
 * empty or error occurred.
 */
char    *get_next_line(int fd)
{
    char        *string;
    static char *buffer;
    
    if (fd < 0 || BUFFER_SIZE <= 0
        || BUFFER_SIZE >= INT_MAX)
        return (NULL);
    buffer = get_reading(fd, buffer);
    if (!buffer)
        return (NULL);
    string = get_string(buffer);
    buffer = gnl_dup(buffer);
    return (string);
}
