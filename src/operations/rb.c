#include "../../includes/headers.h"

void rb(t_stack *stack,int check)
{
	cw_rotate(stack);
	if (check)
		ft_putendl_fd("rb\n",1);
}