/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 20:23:48 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/11/29 18:24:12 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Swaps the first two elements of a stack.
 *
 * @param stack  Double pointer to the stack (t_stack *). 
 * If the stack has fewer than two elements, no action is taken.
 */
void	swap(t_stack **stack, char *str)
{
	t_stack	*first;
	t_stack	*second;

	if (!(*stack) || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	write(1, str, 3);
}

/**
 * Takes the first element from stack_a and pushes it 
 * to the top of stack_b.
 *
 * Does nothing if stack_one is empty.
 *
 * @param stack_a  Pointer to the source stack (t_stack).
 * @param stack_b  Pointer to the destination stack (t_stack).
 */
void	push(t_stack **stack_one,
	t_stack **stack_two,
	char *str)
{
	t_stack	*top_one;
	t_stack	*top_two;

	if (!(*stack_one))
		return ;
	top_one = *stack_one;
	*stack_one = top_one->next;
	top_two = *stack_two;
	*stack_two = top_one;
	top_one->next = top_two;
	write(1, str, 3);
}

/**
 * Shifts all elements of the stack up by one position, 
 * so the first element becomes the last.
 *
 * @param stack  Pointer to the stack (t_stack).
 */
void	rotate(t_stack **stack, char *str)
{
	t_stack	*tmp;
	t_stack	*end;

	if (!(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	end = *stack;
	while (end->next)
		end = end->next;
	end->next = tmp;
	tmp->next = NULL;
	write(1, str, 3);
}

/**
 * Shifts all elements of the stack down by one position, 
 * so the last element becomes the first.
 *
 * @param stack  Pointer to the stack (t_stack).
 */
void	reverse_rotate(t_stack **stack, char *str)
{
	t_stack	*end;
	t_stack	*penultimate;

	if (!(*stack) || !(*stack)->next)
		return ;
	end = *stack;
	while (end->next)
	{
		penultimate = end;
		end = end->next;
	}
	penultimate->next = NULL;
	end->next = *stack;
	*stack = end;
	write(1, str, 4);
}
