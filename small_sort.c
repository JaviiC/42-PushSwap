/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:06:05 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/11/30 15:16:36 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_two(t_stack **stack)
{
	if ((*stack)->value > (*stack)->next->value)
		swap(stack, "sa\n");
}

static void	sort_three(t_stack **stack)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->value;
	b = (*stack)->next->value;
	c = (*stack)->next->next->value;
	if (a > b && b < c && a < c)
		swap(stack, "sa\n");
	else if (a > b && b > c && a > c)
	{
		swap(stack, "sa\n");
		reverse_rotate(stack, "rra\n");
	}
	else if (a > b && b < c && a > c)
		rotate(stack, "ra\n");
	else if (a < b && b > c && a < c)
	{
		swap(stack, "sa\n");
		rotate(stack, "ra\n");
	}
	else if (a < b && b > c && a > c)
		reverse_rotate(stack, "rra\n");
}

static void	sort_four(t_stack **stack_a, t_stack **stack_b)
{
	int	pos;

	pos = find_max_index_pos(*stack_a);
	bring_to_top_a(stack_a, pos, 4);
	push(stack_a, stack_b, "pb\n");
	pos = find_max_index_pos(*stack_a);
	bring_to_top_a(stack_a, pos, 3);
	push(stack_a, stack_b, "pb\n");
	sort_two(stack_a);
	sort_two(stack_b);
	push(stack_b, stack_a, "pa\n");
	rotate(stack_a, "ra\n");
	push(stack_b, stack_a, "pa\n");
	rotate(stack_a, "ra\n");
}

static void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	pos;

	pos = find_max_index_pos(*stack_a);
	bring_to_top_a(stack_a, pos, 5);
	push(stack_a, stack_b, "pb\n");
	pos = find_max_index_pos(*stack_a);
	bring_to_top_a(stack_a, pos, 4);
	push(stack_a, stack_b, "pb\n");
	sort_three(stack_a);
	push(stack_b, stack_a, "pa\n");
	rotate(stack_a, "ra\n");
	push(stack_b, stack_a, "pa\n");
	rotate(stack_a, "ra\n");
}

void	small_sort(int argc, char **args)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	init_all_stacks(2, &stack_a, &stack_b);
	init_stack_a(argc, args, &stack_a);
	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return ;
	}
	if (argc == 2)
		sort_two(&stack_a);
	else if (argc == 3)
		sort_three(&stack_a);
	else if (argc == 4)
		sort_four(&stack_a, &stack_b);
	else
		sort_five(&stack_a, &stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
}
