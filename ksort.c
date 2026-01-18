/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 22:00:01 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/11/30 11:42:41 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	calculate_n_chuncks(int size)
{
	if (size <= 100)
		return (4);
	else if (size <= 250)
		return (7);
	else
		return (9);
}

static t_chunk	*get_chunks(int size,
	int *n_chunks,
	t_stack **stack_a,
	t_stack **stack_b)
{
	int		i;
	t_chunk	*chunks;

	i = 0;
	*n_chunks = calculate_n_chuncks(size);
	chunks = malloc(*n_chunks * sizeof(t_chunk));
	if (!chunks)
		ft_free_error(stack_a, stack_b);
	while (i < *n_chunks)
	{
		if (i == *n_chunks - 1)
		{
			chunks[i].min = size / *n_chunks * i;
			chunks[i].max = size - 1;
		}
		else
		{
			chunks[i].min = size / *n_chunks * i;
			chunks[i].max = chunks[i].min + (size / *n_chunks) - 1;
		}
		chunks[i].n_values = chunks[i].max - chunks[i].min + 1;
		chunks[i].med = (chunks[i].min + chunks[i].max) / 2;
		i++;
	}
	return (chunks);
}

static int	find_value_in_chunk(t_stack *stack_a, t_chunk chunk)
{
	int	pos;

	pos = 0;
	while (stack_a)
	{
		if (stack_a->index >= chunk.min && stack_a->index <= chunk.max)
			return (pos);
		stack_a = stack_a->next;
		pos++;
	}
	return (-1);
}

void	do_rotate(t_stack **stack_a, int pos, int size)
{
	if (pos <= size / 2)
		while (pos-- > 0)
			rotate(stack_a, "ra\n");
	else
		while (pos++ < size - 1)
			reverse_rotate(stack_a, "rra\n");
}

void	ksort(t_stack **stack_a, t_stack **stack_b, int size)
{
	int		i;
	int		pos;
	int		n_chunks;
	t_chunk	*chunks;

	i = 0;
	chunks = get_chunks(size, &n_chunks, stack_a, stack_b);
	while (i < n_chunks)
	{
		size = get_size(*stack_a);
		while (chunks[i].n_values-- > 0)
		{
			pos = find_value_in_chunk(*stack_a, chunks[i]);
			do_rotate(stack_a, pos, size);
			push(stack_a, stack_b, "pb\n");
			if (*stack_b && (*stack_b)->index <= chunks[i].med)
				rotate(stack_b, "rb\n");
		}
		i++;
	}
	free(chunks);
}
