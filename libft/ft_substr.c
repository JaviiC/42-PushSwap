/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:07:51 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/11/22 10:26:12 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Allocates and returns a substring from the string 's'.
 * The substring begins at index and is of maximum length 'size'.
 *
 * @param s the original null-terminated string.
 * @param index starting index of the substring.
 * @param size maximum length of the substring.
 * 
 * @return Pointer to the newly allocated substring, or NULL if allocation fails.
 */
char	*ft_substr(char const *s, unsigned int index, size_t size)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (size > ft_strlen(s) - index)
		size = ft_strlen(s) - index;
	if (index >= ft_strlen(s) || ft_strlen(s) == 0)
		return (ft_strdup(""));
	sub = malloc((size + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + index, size);
	sub[size] = '\0';
	return (sub);
}
/* int main(void)
{
	char *str = "holaJose";
	printf("\n%s", ft_substr(str, 2, 12));
} */