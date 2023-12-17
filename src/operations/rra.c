#include "../../includes/headers.h"

void rra(t_stack *stack,int check)
{
	cw_rroate(stack);
	if (check)
		ft_putendl_fd("rra\n",1);
}