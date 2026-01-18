/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 22:01:15 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:13:44 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * Copies n bytes from a source memory area to a destination.
 * 
 * @param dest pointer to the destination area where the bytes will be copied.
 * @param src pointer to the source memory area from which the bytes
 * 				will be copied.
 * 
 * @param n number of bytes to copy.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p_src;
	char	*p_dest;

	if (!src && !dest)
		return (NULL);
	i = 0;
	p_src = (char *) src;
	p_dest = (char *) dest;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}
