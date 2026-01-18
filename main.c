/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 19:20:53 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/11/30 11:54:29 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_argslen(char **args)
{
	int	i;

	if (!*args)
		return (0);
	i = 1;
	while (args[i])
		i++;
	return (i);
}

int	main(int argc, char *args[])
{
	char	**formated_args;
	int		num_count;

	formated_args = validate_args(argc, args);
	if (!formated_args)
		ft_error();
	num_count = ft_argslen(formated_args);
	if (num_count <= 5)
		small_sort(num_count, formated_args);
	else
		push_swap(num_count, formated_args);
	free_split(formated_args);
	return (0);
}

static void	to_string(t_stack *node)
{
	if (!node)
		return ;
	printf(" node: {\n    value: %d\n    index: %d\n }\n",
		node->value, node->index);
}

void	print_stack(t_stack **stack)
{
	t_stack	*node;

	printf("nodes :\n[\n");
	node = *stack;
	while (node)
	{
		to_string(node);
		node = (node)->next;
	}
	printf("]\n");
}

void	print_list(int **list, int size)
{
	int	i;

	i = 0;
	printf("\nImprimiendo lista ordenada...\nList :\n[");
	while (i < size)
		printf(" %d, ", (*list)[i++]);
	printf("]\n");
}
