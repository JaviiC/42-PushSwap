/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 21:49:30 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/03 22:37:22 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * It takes an 'lst' node as a parameter and frees the contents' memory using 
 * the 'del' function given as a parameter, in addition to freeing the node.
 * The memory in 'next' should not be freed.
 * 
 * @param lst the node to free.
 * @param del a pointer to the function used to free the contents of the node.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
