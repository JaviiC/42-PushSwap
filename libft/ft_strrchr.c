/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 23:04:07 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:25:02 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates the last occurrence of the character 'c' in the string 's'.
 *
 * @param s pointer to the null-terminated string to search.
 * @param c character to locate (converted to char).
 * 
 * @return Pointer to the last occurrence of 'c' in 's', or NULL if not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
int main(void)
{
	char *str = "Hola mira mi mundo";
	printf("\n%s", ft_strrchr(str, 'm'));
}
*/