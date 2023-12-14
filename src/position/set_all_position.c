#include "../../includes/headers.h"

void cw_set_all_position(t_stack *stack)
{
	t_node *tmp;
	int pos;

	pos = 0;
	tmp = stack->top;
	while (tmp)
	{	
		tmp->position = pos;
		tmp = tmp->next;
		pos++;
	}
}