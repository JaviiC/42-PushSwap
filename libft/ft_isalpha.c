/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 01:25:39 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:11:05 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks if the character 'c' is an alphabetic letter (A-Z or a-z).
 *
 * @param c character to check (int).
 * 
 * @return Non-zero if c is alphabetic; 0 otherwise.
 */
int	ft_isalpha(int c)
{
	return (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)));
}
