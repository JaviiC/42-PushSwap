/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 23:24:09 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 17:57:22 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * Iterates through the list 'lst' and applies the function 'f' to the 
 * contents of each node. It creates a list resulting from the correct and 
 * successive application of the function 'f' to each node. The function 'del' 
 * is used to delete the contents of a node, if necessary.
 * 
 * @param lst a pointer to a node.
 * @param f the address of a pointer to a function used 
 * in iterating through each element of the list.
 * @param del A function pointer used to delete the contents of a node, 
 * if necessary.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content;
	t_list	*newnode;
	t_list	*newlist;

	newlist = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		newnode = ft_lstnew(content);
		if (!newnode)
		{
			del(content);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}
