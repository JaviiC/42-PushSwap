/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:21:44 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:05:28 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * Allocates memory for an array of nmemb elements of size bytes each, and 
 * initializes it to zero.
 * 
 * @param nmemb number of elements to allocate.
 * @param size size in bytes of each element.
 * 
 * @return Pointer to the allocated memory initialized to zero, 
 * or NULL on failure.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (!p)
		return (0);
	ft_bzero(p, nmemb * size);
	return (p);
}
