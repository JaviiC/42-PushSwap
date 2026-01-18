/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 22:34:47 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:03:38 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * Sets the first 'n' bytes of the memory area pointed to by 's' to zero.
 * 
 * @param s pointer to the memory area to initialize.
 * @param n number of bytes to initialize to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *) s;
	while (i < n)
		p[i++] = 0;
}
