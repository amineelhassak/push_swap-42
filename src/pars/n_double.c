#include "../../includes/headers.h"

bool cw_n_double(t_stack *stack)
{
	t_node *tmp_a;
	t_node *tmp_b;

	tmp_a = stack->top;
	while (tmp_a)
	{	
		tmp_b = tmp_a->next;
		while(tmp_b)
		{
			if(tmp_b->value == tmp_a->value)
				return false;
			tmp_b = tmp_b->next;
		}
		tmp_a = tmp_a->next;
	}
	return true;
}
