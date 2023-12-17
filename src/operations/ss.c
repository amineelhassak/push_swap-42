#include "../../includes/headers.h"

void ss(t_stack *stack_a,t_stack *stack_b,int check)
{
	cw_swap(stack_a);
	cw_swap(stack_b);
	if (check)
		ft_putendl_fd("ss\n", 1);
}