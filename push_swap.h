/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-cer <jdel-cer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 19:43:25 by jdel-cer          #+#    #+#             */
/*   Updated: 2025/11/30 15:10:51 by jdel-cer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

typedef struct s_chunk
{
	int	min;
	int	max;
	int	med;
	int	n_values;
}	t_chunk;

char	**validate_args(int argc, char *args[]);
void	ft_error(void);
int		init_all_stacks(int n, ...);
void	init_stack_a(int size, char *args[], t_stack **stack_a);
void	free_stack(t_stack *stack);
void	add_back(t_stack **stack, t_stack *new);
t_stack	*new_lst_node(int value);
void	print_stack(t_stack **stack);
t_stack	*get_node(t_stack **stack, int index);
int		get_size(t_stack *stack);
void	push_swap(int size, char **args);
void	ksort(t_stack **stack_a, t_stack **stack_b, int size);
void	print_list(int **list, int size);
void	ft_free_error(t_stack **stack_a, t_stack **stack_b);

void	swap(t_stack **stack, char *str);
void	push(t_stack **stack_one, t_stack **stack_two, char *str);
void	rotate(t_stack **stack, char *str);
void	reverse_rotate(t_stack **stack, char *str);
void	free_split(char **splited);
void	small_sort(int argc, char **args);
int		is_sorted(t_stack *stack);
int		find_cheapest(t_stack *b, t_stack *a);
int		find_min_pos(t_stack *stack);
int		find_target_pos(t_stack *stack_a, int value);
int		is_sorted(t_stack *stack);
void	bring_to_top_a(t_stack **stack_a, int pos, int size_a);
int		find_max_index_pos(t_stack *stack);

#endif