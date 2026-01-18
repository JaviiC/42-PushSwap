/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 19:58:49 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/11/29 13:53:29 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_number_check(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[i] == '+' || nbr[i] == '-')
		i++;
	if (!nbr[i])
		return (0);
	while (nbr[i])
	{
		if (!ft_isdigit((unsigned char)nbr[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	all_args_are_integers(char **args)
{
	int			i;
	long int	n;

	i = 0;
	while (args[i])
	{
		if (!ft_number_check(args[i]))
			return (0);
		n = ft_atoi(args[i]);
		if (n < INT_MIN || n > INT_MAX)
			return (0);
		i++;
	}
	return (1);
}

static int	ft_strcmp(const char *str1, const char *str2)
{
	const unsigned char	*s1;
	const unsigned char	*s2;

	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((int)*s1 - (int)*s2);
}

static int	no_duplicates(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = i + 1;
		while (args[j])
		{
			if (ft_strcmp(args[i], args[j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	**validate_args(int argc, char *args[])
{
	int		i;
	char	*str;
	char	*tmp;
	char	**args_formated;

	i = 1;
	if (argc < 2)
		return (0);
	str = ft_strdup(args[1]);
	while (i < argc - 1)
	{
		tmp = ft_strjoin(str, " ");
		free(str);
		str = tmp;
		tmp = ft_strjoin(str, args[i + 1]);
		free(str);
		str = tmp;
		i++;
	}
	args_formated = ft_split(str, ' ');
	free(str);
	if (!all_args_are_integers(args_formated) || !no_duplicates(args_formated))
		return (free_split(args_formated), NULL);
	return (args_formated);
}
