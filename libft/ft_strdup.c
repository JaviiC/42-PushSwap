/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:22:58 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:19:27 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * Duplicates the string 's' by allocating sufficient memory and copying 
 * its contents.
 *
 * @param s pointer to the null-terminated string to duplicate.
 * 
 * @return Pointer to the newly allocated copy of 's', or NULL if 
 * allocation fails.
 */
char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*cpy;

	i = 0;
	len = ft_strlen(s);
	cpy = malloc((len + 1) * sizeof(char));
	if (!cpy)
		return (0);
	while (i <= len)
	{
		cpy[i] = s[i];
		i++;
	}
	return (cpy);
}
