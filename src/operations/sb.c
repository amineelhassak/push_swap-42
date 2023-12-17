#include "../../includes/headers.h"

void sb(t_stack *stack,int check)
{
	cw_swap(stack);
	if (check)
		ft_putendl_fd("sb\n", 1);
}