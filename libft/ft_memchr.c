/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 23:04:31 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:12:06 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * Scans the first 'n' bytes of the memory area pointed to by 's' for the
 * first occurrence of the character 'c' (converted to unsigned char).
 *
 * @param s pointer to the memory area to scan.
 * @param c character to search for (int, converted to unsigned char).
 * @param n number of bytes to scan.
 * 
 * @return Pointer to the matching byte or NULL if not found within n bytes.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;
	unsigned char	ch;

	i = 0;
	p = (unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (p[i] == ch)
			return ((void *) &p[i]);
		i++;
	}
	return (NULL);
}
