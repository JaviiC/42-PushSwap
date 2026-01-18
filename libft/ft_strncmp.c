/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 21:49:10 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:23:39 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * Compares up to 'n' characters of the strings 's1' and 's2'.
 *
 * @param s1 pointer to the first string.
 * @param s2 pointer to the second string.
 * @param n maximum number of characters to compare.
 * 
 * @return An integer less than, equal to, or greater than zero
 *         if 's1' (or the first 'n' bytes thereof) is found,
 *         respectively, to be less than, to match, or be greater than 's2'.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
