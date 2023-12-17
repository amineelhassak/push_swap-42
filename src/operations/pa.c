#include "../../includes/headers.h"

void pa(t_stack *stack_a, t_stack *stack_b,int check)
{
	cw_push(stack_b, stack_a);
	if (check)
		ft_putendl_fd("pa\n",1);
}