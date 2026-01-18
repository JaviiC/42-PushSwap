/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 22:43:58 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/11/25 23:26:09 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	t_stack	*temp;

	while (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}

void	free_split(char **splited)
{
	int	i;

	if (!splited)
		return ;
	i = 0;
	while (splited[i])
		free(splited[i++]);
	free(splited);
}
