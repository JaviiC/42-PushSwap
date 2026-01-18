/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:46:23 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:27:23 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Converts a lowercase letter to uppercase.
 *
 * @param c character to convert (int).
 * 
 * @return Uppercase equivalent if 'c' is lowercase; otherwise, 
 * returns 'c' unchanged.
 */
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - ' ';
	return (c);
}
