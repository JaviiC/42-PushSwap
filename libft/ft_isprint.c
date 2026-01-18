/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:40:06 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:10:46 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks if the character 'c' is printable, including space.
 *
 * @param c character to check (int).
 * 
 * @return Non-zero if n is printable; 0 otherwise.
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
