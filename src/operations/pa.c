#include "../../includes/headers.h"

void cw_pa(t_stack *stack_a, t_stack *stack_b)
{
	cw_push(stack_b, stack_a);
	ft_putendl_fd("pa\n",1);
}