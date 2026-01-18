/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 21:11:10 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/11/30 15:02:29 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	bring_to_top_b(t_stack **stack_b, int pos, int size_b)
{
	if (pos <= size_b / 2)
	{
		while (pos-- > 0)
			rotate(stack_b, "rb\n");
	}
	else
	{
		while (pos++ < size_b)
			reverse_rotate(stack_b, "rrb\n");
	}
}

void	bring_to_top_a(t_stack **stack_a, int pos, int size_a)
{
	if (pos <= size_a / 2)
	{
		while (pos-- > 0)
			rotate(stack_a, "ra\n");
	}
	else
	{
		while (pos++ < size_a)
			reverse_rotate(stack_a, "rra\n");
	}
}

static void	final_rotation(t_stack **stack_a)
{
	int	size;
	int	min_pos;

	size = get_size(*stack_a);
	min_pos = find_min_pos(*stack_a);
	if (min_pos <= size / 2)
	{
		while (min_pos-- > 0)
			rotate(stack_a, "ra\n");
	}
	else
	{
		while (min_pos++ < size)
			reverse_rotate(stack_a, "rra\n");
	}
}

static void	push_back_to_a(t_stack **stack_b, t_stack **stack_a)
{
	int	size_b;
	int	size_a;
	int	best_pos;
	int	target_pos;

	while (*stack_b)
	{
		size_b = get_size(*stack_b);
		size_a = get_size(*stack_a);
		best_pos = find_cheapest(*stack_b, *stack_a);
		bring_to_top_b(stack_b, best_pos, size_b);
		target_pos = find_target_pos(*stack_a, (*stack_b)->value);
		if (*stack_a)
			bring_to_top_a(stack_a, target_pos, size_a);
		push(stack_b, stack_a, "pa\n");
	}
	final_rotation(stack_a);
}

void	push_swap(int size, char **args)
{
	int		init;
	t_stack	*stack_a;
	t_stack	*stack_b;

	init = init_all_stacks(2, &stack_a, &stack_b);
	if (!init)
		ft_error();
	init_stack_a(size, args, &stack_a);
	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return ;
	}
	ksort(&stack_a, &stack_b, size);
	push_back_to_a(&stack_b, &stack_a);
	free_stack(stack_a);
	free_stack(stack_b);
}
