/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:49:40 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:22:26 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * Copies up to size - 1 characters from the null-terminated string 
 * 'src' to 'dst', null-terminating the result.
 *
 * @param dst destination buffer.
 * @param src source string to copy.
 * @param size size of the destination buffer.
 * 
 * @return The total length of 'src'. 
 * 			If return value >= size, truncation occurred.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;

	n = 0;
	if (size > 0)
	{
		while (n < size - 1 && src[n])
		{
			dst[n] = src[n];
			n++;
		}
		dst[n] = '\0';
	}
	return (ft_strlen(src));
}
