/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:24:12 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/03 18:50:10 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * Create a new node using malloc(). The member variable 'content' is 
 * initialized with the contents of the 'content' parameter. The 'next' variable
 * is initialized with NULL.
 * 
 * @param content the content with which to create the node.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*obj;

	obj = (t_list *)malloc(sizeof(t_list));
	if (!obj)
		return (NULL);
	obj->content = content;
	obj->next = NULL;
	return (obj);
}
