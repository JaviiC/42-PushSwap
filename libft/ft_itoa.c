/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:34:12 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/10/04 18:08:42 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_nlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_value_zero(void)
{
	char	*nbr;

	nbr = malloc(2);
	if (!nbr)
		return (NULL);
	nbr[0] = '0';
	nbr[1] = '\0';
	return (nbr);
}

/**
 * Generates a string that represents the integer value received as an argument.
 * 
 * @param n integer to convert.
 * 
 * @return Pointer to the newly allocated string representing the integer, 
 * or NULL if memory allocation fails.
 */
char	*ft_itoa(int n)
{
	long	l;
	int		nlen;
	char	*nbr;

	if (n == 0)
		return (ft_value_zero());
	l = (long)n;
	nlen = ft_nlen(l);
	nbr = malloc(nlen * sizeof(char) + 1);
	if (!nbr)
		return (NULL);
	if (l < 0)
	{
		l *= -1;
		nbr[0] = '-';
	}
	nbr[nlen] = '\0';
	while (l > 0)
	{
		nbr[nlen - 1] = l % 10 + '0';
		l /= 10;
		nlen--;
	}
	return (nbr);
}
/*
int	main(void)
{
	char *nbr = ft_itoa(-2147483648);
	printf("\nNumero: %s\n", nbr);
}
*/