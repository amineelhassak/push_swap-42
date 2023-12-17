#include "../../includes/headers.h"

void rrb(t_stack *stack,int check)
{
	cw_rroate(stack);
	if (check)
		ft_putendl_fd("rrb\n", 1);
}