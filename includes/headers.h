#ifndef HEADERS_H
# define HEADERS_H

//  corporation company //
# include <libc.h>
# include <stdbool.h>
# include<limits.h>
# include "stractus.h"
# include "../lib/libft.h"

# define MSGERR "\033[0;91mERROR\033[0m"
// ------------------------creation-----------------------------------------
t_stack *cw_c_stack();//
t_node	*cw_c_node(int value);//
// ------------------------pars-----------------------------------------
bool	cw_check_all_numbers(char *str);//
bool	cw_n_double(t_stack *stack);
bool	cw_is_sort(t_stack *stack);
long    cw_atoi(const char *str);
int     cw_is_empty(char **av);
int     cw_is_spaces(char *str);
// ---------------------------instractions--------------------------------------
void	cw_stack_add(t_stack *stack,int value);//
void 	cw_display(t_stack *stack);//
void	cw_pop(t_stack *stack);//
void	cw_push(t_stack *stack_1, t_stack *stack_2);//
void	cw_rroate(t_stack *stack);//
void	cw_rotate(t_stack *stack);//
void	cw_swap(t_stack *stack);//
int		cw_pars(t_stack *stack_a,int c,char **v);//
// ---------------------------operations--------------------------------------
void	rb(t_stack *stack);//
void	ra(t_stack *stack);//
void	rr(t_stack *stack_a,t_stack *stack_b);//
void	rra(t_stack *stack);//
void	rrb(t_stack *stack);//
void	rrr(t_stack *stack_a,t_stack *stack_b);//
void	sa(t_stack *stack);//
void	sb(t_stack *stack);//
void	ss(t_stack *stack_a,t_stack *stack_b);//
void	pa(t_stack *stack_a, t_stack *stack_b);//
void	pb(t_stack *stack_a, t_stack *stack_b);//
// ---------------------------moves--------------------------------------
void	cw_move_to_stack_b(t_stack *stack_a, t_stack *stack_b);
void    cw_move_to_stack_a(t_stack *stack_a,t_stack *stack_b);
// ----------------------------algo-------------------------------------
void	cw_sort_index(t_stack *stack);//
void	cw_select_sort_methode(t_stack *stack_a,t_stack *stack_b);//
void	cw_small_sort(t_stack *stack);//
void	cw_big_sort(t_stack *stack_a,t_stack *stack_b);//
int     cw_search_position_max(t_stack *stack,int element);//
int     cw_max_index(t_stack *stack);//
void    cw_mid_sort(t_stack *stack_a, t_stack *stack_b);
//--------------------------------push----------------------------------
void    cw_push_from_lo(t_stack *stack_a, t_stack *stack_b, int max_a, int *check);//
void    cw_push_from_up(t_stack *stack_a, t_stack *stack_b, int max_a, int *check);//
// --------------------------------free---------------------------------
void      cw_clear_stack(t_stack *stack);//
#endif