#include "../../includes/headers.h"

void sa(t_stack *stack,int check)
{
	cw_swap(stack);
	if (check)
		ft_putendl_fd("sa\n", 1);
}