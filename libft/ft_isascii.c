/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 23:00:42 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:11:01 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks if the character 'c' is an ASCII character (0 to 127).
 *
 * @param c character to check (int).
 * 
 * @return Non-zero if c is an ASCII character; 0 otherwise.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
