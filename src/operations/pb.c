#include "../../includes/headers.h"

void pb(t_stack *stack_a, t_stack *stack_b)
{
	cw_push(stack_a, stack_b);
	ft_putendl_fd("pb\n",1);
}