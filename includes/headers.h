/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:16:56 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 21:24:45 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

# include <libc.h>
# include <stdbool.h>
# include <limits.h>
# include "stractus.h"
# include "../lib/libft.h"
# include "../get_next_linee/get_next_line.h"

# define MSGERR "\033[0;91mError\n\033[0m"

t_stack	*cw_c_stack(void);
t_node	*cw_c_node(int value);
void	*cw_free(char **arr, int n);
int		cw_count_words(char const *str, char c);
bool	cw_check_all_numbers(char *str);
bool	cw_n_double(t_stack *stack);
bool	cw_is_sort(t_stack *stack);
long	cw_atoi(const char *str);
int		cw_is_empty(char **av);
int		cw_is_spaces(char *str);
void	cw_stack_add(t_stack *stack, int value);
void	cw_push(t_stack *stack_1, t_stack *stack_2);
void	cw_rroate(t_stack *stack);
void	cw_rotate(t_stack *stack);
void	cw_swap(t_stack *stack);
int		cw_pars(t_stack *stack_a, int c, char **v);
void	rb(t_stack *stack, int check);
void	ra(t_stack *stack, int check);
void	rr(t_stack *stack_a, t_stack *stack_b, int check);
void	rra(t_stack *stack, int check);
void	rrb(t_stack *stack, int check);
void	rrr(t_stack *stack_a, t_stack *stack_b, int check);
void	sa(t_stack *stack, int check);
void	sb(t_stack *stack, int check);
void	ss(t_stack *stack_a, t_stack *stack_b, int check);
void	pa(t_stack *stack_a, t_stack *stack_b, int check);
void	pb(t_stack *stack_a, t_stack *stack_b, int check);
void	cw_move_to_stack_b(t_stack *stack_a, t_stack *stack_b);
void	cw_move_to_stack_a(t_stack *stack_a, t_stack *stack_b);
void	cw_move_mid_stack_b(t_stack *stack_a, t_stack *stack_b);
void	cw_sort_index(t_stack *stack);
void	cw_select_sort_methode(t_stack *stack_a, t_stack *stack_b);
void	cw_small_sort(t_stack *stack);
void	cw_big_sort(t_stack *stack_a, t_stack *stack_b);
int		cw_search_position_max(t_stack *stack, int element);
int		cw_max_index(t_stack *stack);
void	cw_mid_sort(t_stack *stack_a, t_stack *stack_b);
void	cw_push_from_lo(t_stack *stack_a, t_stack *stack_b, int max_a, int *in);
void	cw_push_from_up(t_stack *stack_a, t_stack *stack_b, int max_a, int *in);
void	cw_clear_stack(t_stack *stack);
void	ox_free(t_stack *stack_a, t_stack *stack_b);
#endif