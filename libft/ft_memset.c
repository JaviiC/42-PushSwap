/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 22:25:38 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:15:52 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * Fills the first 'n' bytes of the memory area pointed to by 's' with the 
 * constant byte 'c'.
 *
 * @param s pointer to the memory area to fill.
 * @param c byte value to set (converted to unsigned char).
 * @param n number of bytes to fill.
 * 
 * @return Pointer to the memory area 's'.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *) s;
	while (i < n)
		p[i++] = c;
	return (s);
}
