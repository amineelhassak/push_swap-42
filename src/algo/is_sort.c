#include "../../includes/headers.h"

bool cw_is_sort(t_stack *stack)
{
	t_node *tmp1;
	t_node *tmp2;

	tmp1 = stack->top;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		while (tmp2)
		{
			if (tmp2->value < tmp1->value)
				return (0);
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
	return 1;
}