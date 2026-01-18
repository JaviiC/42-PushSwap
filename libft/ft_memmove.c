/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 22:51:18 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:15:59 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * Safely copies 'n' bytes from the 'src' pointer to the 'dest' pointer. It is 
 * done from back to front to avoid overlapping.
 * 
 * @param dest pointer to the destination memory area.
 * @param src pointer to the source memory area.
 * @param n number of bytes to copy.
 * 
 * @return Pointer to the destination memory area 'dest'.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (n == 0 || dest == src)
		return (dest);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (dest < src)
		ft_memcpy(d, s, n);
	else
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dest);
}
