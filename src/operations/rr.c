#include "../../includes/headers.h"

void cw_rr(t_stack *stack_a,t_stack *stack_b)
{
	cw_rotate(stack_a);
	cw_rotate(stack_b);
	ft_putendl_fd("rr\n",1);
}