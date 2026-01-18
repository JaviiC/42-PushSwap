/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 11:36:52 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/11/30 15:16:45 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_pos(t_stack *stack)
{
	int		pos;
	int		min_pos;
	int		min_val;
	t_stack	*tmp;

	pos = 0;
	min_pos = 0;
	tmp = stack;
	min_val = stack->value;
	while (tmp)
	{
		if (tmp->value < min_val)
		{
			min_val = tmp->value;
			min_pos = pos;
		}
		pos++;
		tmp = tmp->next;
	}
	return (min_pos);
}

int	find_target_pos(t_stack *stack_a, int value)
{
	int		pos;
	int		target_pos;
	int		target_val;
	t_stack	*tmp;

	if (!stack_a)
		return (0);
	pos = 0;
	target_pos = 0;
	target_val = INT_MAX;
	tmp = stack_a;
	while (tmp)
	{
		if (tmp->value > value && tmp->value < target_val)
		{
			target_val = tmp->value;
			target_pos = pos;
		}
		pos++;
		tmp = tmp->next;
	}
	if (target_val == INT_MAX)
		target_pos = find_min_pos(stack_a);
	return (target_pos);
}

static int	calc_cost(int pos_b, int tgt_a, int size_b, int size_a)
{
	int	cost_b;
	int	cost_a;

	if (pos_b <= size_b / 2)
		cost_b = pos_b;
	else
		cost_b = size_b - pos_b;
	if (size_a == 0)
		cost_a = 0;
	else if (tgt_a <= size_a / 2)
		cost_a = tgt_a;
	else
		cost_a = size_a - tgt_a;
	return (cost_a + cost_b);
}

int	find_cheapest(t_stack *stack_b, t_stack *stack_a)
{
	int		pos;
	int		best_pos;
	int		best_cost;
	int		cost;
	t_stack	*tmp;

	best_cost = INT_MAX;
	best_pos = 0;
	pos = 0;
	tmp = stack_b;
	while (tmp)
	{
		cost = calc_cost(pos,
				find_target_pos(stack_a, tmp->value),
				get_size(stack_b),
				get_size(stack_a));
		if (cost < best_cost)
		{
			best_cost = cost;
			best_pos = pos;
		}
		pos++;
		tmp = tmp->next;
	}
	return (best_pos);
}

int	find_max_index_pos(t_stack *stack)
{
	int		max_idx;
	int		pos;
	int		max_pos;
	t_stack	*tmp;

	max_idx = stack->index;
	max_pos = 0;
	pos = 0;
	tmp = stack;
	while (tmp)
	{
		if (tmp->index > max_idx)
		{
			max_idx = tmp->index;
			max_pos = pos;
		}
		pos++;
		tmp = tmp->next;
	}
	return (max_pos);
}
