/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_strjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 20:00:41 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/28 20:28:37 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
/**
 * @brief Concatenates two strings into
 * a single string.
 * 
 * @param string_one The first string. If this
 * string is NULL, it will be treated
 * as an empety string.
 * @param string_two The second string.
 * @return char* The created string or NULL
 * if an error occurs.
 */
char    *gnl_strjoin(char *string_one, char *string_two)
{
    unsigned int    index;
    unsigned int    count;
    char            *string;

    index = 0;
    count = 0;
    if (!string_one)
    {
        string_one = (char *)malloc(sizeof(char));
        *string_one = '\0';
    }
    string = malloc((ft_strlen(string_one) +
        ft_strlen(string_two) + 1) * sizeof(char));
    if (!string_two || !string)
        return (NULL);
    while (string_one[index] != '\0')
    {
        string[index] = string_one[index];
        index++;
    }
    while (string_two[count] != '\0')
        string[index++] = string_two[count++];
    string[index] = '\0';
    free(string_one);
    return (string);
}
