/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 21:26:59 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/11/28 17:31:12 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Creates a new node for a t_stack linked list.
 *
 * Allocates memory for a new t_stack node and initializes its fields with
 * the provided value and position. The next pointer is set to NULL.
 *
 * @param value     The integer value stored in the node.
 * @param position  The position or index associated with the node.
 * 
 * @return A pointer to the newly created node, 
 * or NULL if memory allocation fails.
 */
t_stack	*new_lst_node(int value)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->next = NULL;
	return (node);
}

/**
 * @brief Retrieves the last node of a t_stack linked list.
 *
 * Traverses the list starting from the given node until it reaches the last
 * element (i.e., a node whose next pointer is NULL).
 *
 * @param stack  A pointer to the first node of the list.
 * 
 * @return The last node in the list, or NULL if the list is empty.
 */
t_stack	*get_last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

/**
 * Adds a new node to the end of a stack. 
 * If the stack is empty, the new node becomes the first element.
 *
 * @param stack Pointer to the pointer of the stack.
 * @param new Pointer to the new node to be added.
 */
void	add_back(t_stack **stack, t_stack *new)
{
	t_stack	*last_node;

	if (!stack || !new)
		return ;
	if (!*stack)
		*stack = new;
	else
	{
		last_node = get_last_node(*stack);
		last_node->next = new;
	}
}

/**
 * Returns the node at a specific index in the stack.
 * If the index is out of bounds, returns NULL.
 *
 * @param stack Pointer to the pointer of the stack.
 * @param index Zero-based index of the node to retrieve.
 * 
 * @return t_stack* Pointer to the node at the given index,
 * or NULL if index is invalid.
 */
t_stack	*get_node(t_stack **stack, int index)
{
	int		i;
	t_stack	*node;

	if (index > get_size(*stack) - 1)
		return (NULL);
	i = 0;
	node = *stack;
	while (i++ < index)
		node = node->next;
	return (node);
}

/**
 * Returns the number of nodes in a stack.
 *
 * @param stack Pointer to the stack.
 * 
 * @return int Number of nodes in the stack.
 */
int	get_size(t_stack *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}
