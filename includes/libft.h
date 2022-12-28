/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 20:11:15 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/28 13:12:22 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 999
# endif

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

/**
 * @brief A list of nodes with content.
 * it cotains a pointer to the element's
 * data and a pointer to the next node in
 * the list.
 */
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

/* gnl */

char    *get_next_line(int fd);
char    *get_reading(int fd, char *string);
char    *get_string(char *string);
char    *gnl_strjoin(char *string_one, char *string_two);

/* printf */

int     ft_printf(const char *format, ...);
size_t  ft_parse(va_list args, char format);
size_t  handle_char(char character);
size_t  handle_hex(unsigned long x, int prefix, size_t cap);
size_t  handle_num(long long nbr);
size_t  handle_str(const char *string);

/* parse */

int     ft_atoi(const char *string);
char    *ft_itoa(int nbr);

/* list */

int     ft_lstsize(t_list *list);
void    ft_lstadd_back(t_list **list, t_list *new_node);
void    ft_lstadd_front(t_list **list, t_list *new_node);
void    ft_lstclear(t_list **list, void (*del)(void *));
void    ft_lstdelone(t_list *list, void (*del)(void *));
void    ft_lstiter(t_list *list, void (*f)(void *));
t_list  *ft_lstlast(t_list *list);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list  *ft_lstnew(void *content);

/* string */

char    **ft_split(char const *string, char c);
char    *ft_strchr(const char *string, int c);
char    *ft_strdup(const char *string);
void    ft_striteri(char *string, void (*f)(unsigned int, char *));
char    *ft_strjoin(char const *string_one, char const *string_two);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);

#endif