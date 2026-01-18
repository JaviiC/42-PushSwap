/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:57:15 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/11/16 21:10:27 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a string to an integer. Ignores leading whitespace and 
 * considers the '+' or '-' sign.
 * 
 * @param str pointer to the character string to be converted.
 * 
 * @return Integer resulting from the conversion.
 */
long int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	total;

	i = 0;
	sign = 1;
	total = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		total = total * 10 + (str[i] - '0');
		i++;
	}
	return (sign * total);
}
/*
int main(void)
{
	int num = ft_atoi("    123");
	printf("\nResult: %d", num);
}
*/