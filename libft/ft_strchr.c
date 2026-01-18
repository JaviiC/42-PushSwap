/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 23:03:55 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:18:33 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Locates the first occurrence of the character 'c' in the string 's'.
 *
 * @param s pointer to the null-terminated string to search.
 * @param c character to locate (converted to char).
 * 
 * @return Pointer to the first occurrence of 'c' in 's', or NULL if not found.
 */
char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (0);
}
