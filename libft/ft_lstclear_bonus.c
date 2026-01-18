/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 22:40:16 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/03 23:10:58 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * Deletes and frees the given 'lst' node and all consecutive nodes within 
 * that node, using the 'del' function and free(3). At the end, the list 
 * pointer must be NULL.
 * 
 * @param lst the address of a pointer to a node.
 * @param del a function pointer used to delete the contents of a node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !*lst)
		return ;
	ft_lstclear(&(*lst)->next, del);
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
