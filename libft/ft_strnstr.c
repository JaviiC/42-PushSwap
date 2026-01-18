/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 23:05:01 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:24:16 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * Locates the first occurrence of the null-terminated string 'to_find'
 * within the string 'str', searching at most 'len' characters.
 *
 * @param str the string to be searched.
 * @param to_find the substring to locate.
 * @param len maximum number of characters to search in 'str'.
 * 
 * @return Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found within 'len' characters.
 */
char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	int		j;

	if (*to_find == '\0')
		return ((char *) str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while ((i + j < len) && str[i + j] == to_find[j] && to_find[j])
			j++;
		if (to_find[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
