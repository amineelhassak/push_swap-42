#include "../../includes/headers.h"

int cw_max_index(t_stack *stack)
{
	t_node *tmp;
	int max;
	
	tmp = stack->top;
	max = stack->top->index;
	while (tmp)
	{
		if(max < tmp->index)
			max = tmp->index;
		tmp = tmp->next;
	}
	return max;
}