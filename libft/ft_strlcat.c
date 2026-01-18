/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:13:03 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:21:20 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * Appends the null-terminated string 'src' to the end of 'dst'. It will append 
 * at most size - strlen(dst) - 1 bytes, null-terminating the result.
 *
 * @param dst destination buffer.
 * @param src source string to append.
 * @param size total size of the destination buffer.
 * 
 * @return The initial length of 'dst' plus the length of 'src'. 
 * If return value >= size, truncation occurred.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = 0;
	while (dst[i] && i < size)
		i++;
	dst_len = i;
	if (ft_strlen(dst) >= size)
		return (i + ft_strlen(src));
	j = 0;
	while (src[j] && i < (size - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}
