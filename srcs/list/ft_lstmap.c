/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:12:48 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/28 20:28:37 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Iterates the list 'lst' and applies
 * the function 'f' to the content of each element.
 * Creates a new list resulting of the
 * sucessive application of the function 'f'.
 * The 'del' function is used to
 * delete the content of an element if needed.
 * 
 * @param lst The adress of a pointer to an element.
 * @param f The adress of the function used
 * to iterate on the list
 * @param del The adress of the function used
 * to delete the
 * content of an element if needed.
 * @return 't_list*' Returns the new list or
 * NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *elem;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		if (!(elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
