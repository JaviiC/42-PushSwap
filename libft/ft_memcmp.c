/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 23:04:46 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:13:18 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * Compares the first 'n' bytes of the memory areas 's1' and 's2'.
 *
 * @param s1 pointer to the first memory area.
 * @param s2 pointer to the second memory area.
 * @param n number of bytes to compare.
 * 
 * @return An integer less than, equal to, or greater than zero if the 
 * 			first 'n' bytes of 's1' is found, respectively, to be less than, 
 * 			to match, or be greater than the first 'n' bytes of 's2'.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p_s1;
	unsigned char	*p_s2;

	i = 0;
	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (p_s1[i] != p_s2[i])
			return (p_s1[i] - p_s2[i]);
		i++;
	}
	return (0);
}
