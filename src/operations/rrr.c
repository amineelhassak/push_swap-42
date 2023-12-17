#include "../../includes/headers.h"

void rrr(t_stack *stack_a,t_stack *stack_b,int check)
{
	cw_rroate(stack_a);
	cw_rroate(stack_b);
	if (check)
		ft_putendl_fd("rrr\n", 1);
}