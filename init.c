/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 21:36:45 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/11/28 19:23:05 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdarg.h>

/**
 * Initializes multiple stacks to NULL using a variadic list of pointers.
 *
 * @param n Number of stacks to initialize.
 * @param ... Variadic arguments, each a t_stack** to set to NULL.
 * 
 * @return int Always returns 1.
 */
int	init_all_stacks(int n, ...)
{
	int		i;
	t_stack	**stack;
	va_list	stack_cursor;

	i = 0;
	va_start(stack_cursor, n);
	while (i < n)
	{
		stack = va_arg(stack_cursor, t_stack **);
		*stack = NULL;
		i++;
	}
	va_end(stack_cursor);
	return (1);
}

/**
 * Fills a stack with integer values from a string array.
 *
 * @param size Number of values to initialize.
 * @param args Array of strings containing the values.
 * @param stack_a Pointer to the stack to populate.
 */
static void	init_values(int size, char *args[], t_stack **stack_a)
{
	int		i;
	int		n;
	t_stack	*node;

	i = 0;
	while (i < size)
	{
		n = ft_atoi(args[i]);
		node = new_lst_node(n);
		add_back(stack_a, node);
		i++;
	}
}

/**
 * Assigns an index to each node in the stack based on its value.
 * The smallest value gets index 0, next smallest index 1, etc.
 *
 * @param size Number of nodes in stack_a.
 * @param stack_a Pointer to the stack to index.
 */
static void	init_stack_indexes(int size, t_stack **stack_a)
{
	int		i;
	t_stack	*temp;
	t_stack	*node;

	i = 0;
	while (i < size)
	{
		temp = NULL;
		node = *stack_a;
		while (node)
		{
			if (node->index == -1
				&& (temp == NULL || node->value < temp->value))
				temp = node;
			node = node->next;
		}
		temp->index = i;
		i++;
	}
}

void	init_stack_a(int size, char *args[], t_stack **stack_a)
{
	init_values(size, args, stack_a);
	init_stack_indexes(size, stack_a);
}
