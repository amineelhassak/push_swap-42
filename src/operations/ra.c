#include "../../includes/headers.h"

void ra(t_stack *stack,int check)
{
	cw_rotate(stack);
	if (check)
		ft_putendl_fd("ra\n",1);	
}