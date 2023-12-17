#include "../../includes/headers.h"

void pb(t_stack *stack_a, t_stack *stack_b,int check)
{
	cw_push(stack_a, stack_b);
	if (check)
		ft_putendl_fd("pb\n",1);
}