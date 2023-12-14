#include "../../includes/headers.h"

void cw_display(t_stack *stack)
{
	t_node *tmp;
	tmp = stack->top;

	if (!stack)
		return;
	while (tmp)
	{
		printf("INDEX : %d  \n",tmp->index);
		tmp = tmp->next;
	}
}