/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 21:01:11 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:11:07 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the character 'c' is alphanumeric (letter or digit).
 * 
 * @param c character to check (int).
 * 
 * @return Non-zero if c is alphanumeric; 0 otherwise.
 */
int	ft_isalnum(int c)
{
	return ((((c >= 65 && c <= 90)
				|| (c >= 97 && c <= 122)
				|| (c >= 48 && c <= 57)))
	);
}
