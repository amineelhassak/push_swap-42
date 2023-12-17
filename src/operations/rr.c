#include "../../includes/headers.h"

void rr(t_stack *stack_a,t_stack *stack_b,int check)
{
	cw_rotate(stack_a);
	cw_rotate(stack_b);
	if (check)
		ft_putendl_fd("rr\n",1);
}