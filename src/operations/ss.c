#include "../../includes/headers.h"

void ss(t_stack *stack_a,t_stack *stack_b)
{
	cw_swap(stack_a);
	cw_swap(stack_b);
	ft_putendl_fd("ss\n", 1);
}