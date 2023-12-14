#ifndef HEADERS_H
# define HEADERS_H

//  corporation company //
# include <libc.h>
# include <stdbool.h>
# include<limits.h>
# include "stractus.h"
# include "../lib/libft.h"

# define MSGERR "ERROR"

t_stack	*cw_c_list();//
t_node	*cw_c_node(int value);//
// -----------------------------------------------------------------
bool	cw_check_all_numbers(char *str);//
bool	cw_n_double(t_stack *stack);
bool	cw_is_sort(t_stack *stack);
// -----------------------------------------------------------------
void	cw_stack_add(t_stack *stack,int value);//
void 	cw_display(t_stack *stack);//
void	cw_pop(t_stack *stack);//
void	cw_push(t_stack *stack_1, t_stack *stack_2);//
void	cw_rroate(t_stack *stack);//
void	cw_rotate(t_stack *stack);//
void	cw_swap(t_stack *stack);//
int		cw_pars(t_stack *stack_a,int c,char **v);//
// -----------------------------------------------------------------
void	cw_ra(t_stack *stack);//
void	cw_rb(t_stack *stack);//
void	cw_rr(t_stack *stack_a,t_stack *stack_b);//
void	cw_rra(t_stack *stack);//
void	cw_rrb(t_stack *stack);//
void	cw_rrr(t_stack *stack_a,t_stack *stack_b);//
void	cw_sa(t_stack *stack);//
void	cw_sb(t_stack *stack);//
void	cw_ss(t_stack *stack_a,t_stack *stack_b);//
void	cw_pa(t_stack *stack_a, t_stack *stack_b);//
void	cw_pb(t_stack *stack_a, t_stack *stack_b);//
// -----------------------------------------------------------------
void	cw_move_to_stack_b(t_stack *stack_a, t_stack *stack_b);
// void	cw_move_to_stack_a(t_stack *stack_a,t_stack *stack_b);
// -----------------------------------------------------------------
void	cw_sort_index(t_stack *stack);//
void	cw_select_sort_methode(t_stack *stack_a,t_stack *stack_b);
void	cw_select_sort_methode(t_stack *stack_a,t_stack *stack_b);
void	cw_small_sort(t_stack *stack);//
void	cw_big_sort(t_stack *stack_a,t_stack *stack_b);
int cw_search_position_max(t_stack *stack,int element);
void cw_move_to_stack_a(t_stack *stack_a,t_stack *stack_b);
// -----------------------------------------------------------------
// void	cw_search_position(t_stack *stack_a,t_stack * stack_b);
// int		cw_search_min_move_fin(t_stack *stack);
// int		cw_search_min_moves(t_stack * stack);
// int		cw_search_min_greater_than(t_stack *stack,int index,int *handel);

// int		cw_search_min_index(t_stack *stack);
// -----------------------------------------------------------------
// void	cw_cal_and_assignmoves(t_stack *stack);
// void	cw_cal_move_final(t_stack *stack_a,t_stack *stack_b);

// void main2(t_stack *stack_a,t_stack *stack_b);
int cw_max_index(t_stack *stack);
// int cw_search_position_max(t_stack *stack, int element);
// void	cw_set_all_position(t_stack *stack);
#endif