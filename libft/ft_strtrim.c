/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:26:55 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:25:41 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * Checks if character 'c' is present in the string 'set'.
 *
 * @param c character to check.
 * @param set null-terminated string representing the set of characters.
 * 
 * @return Non-zero if 'c' is found in set; 0 otherwise.
 */
static int	ft_contains(char c, char const *set)
{
	while (*set)
	{
		if (c == (char)*set)
			return (1);
		set++;
	}
	return (0);
}

/**
 * Removes all characters from the string 'set'
 * from the beginning and end of 's1', until a character not in 'set' is found.
 * 
 * @return resulting string.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	int		len;
	char	*str;

	start = 0;
	while (s1[start] && ft_contains(s1[start], set))
		start++;
	len = ft_strlen(s1);
	end = len - 1;
	while (end >= start && ft_contains(s1[end], set))
		end--;
	str = malloc((end - start + 2) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
