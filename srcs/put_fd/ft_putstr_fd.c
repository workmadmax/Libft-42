/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 19:03:28 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/28 19:04:55 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the string 's' to the given file descriptor.
 * @param string The string to output.
 * @param fd The file descriptor on which to write.
 * @return None.
*/
void    ft_putstr_fd(char *string, int fd)
{
    int index;

    index = 0;
    if (string)
    {
        while (string[index] != '\0')
        {
            write(fd, string, 1);
            index++;
        }
    }
}
