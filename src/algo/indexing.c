#include "../../includes/headers.h"

static int cw_get_min(t_stack *stack)
{
	int min;
	t_node *tmp;

	tmp = stack->top;
	min = INT_MAX;
	while(tmp)
	{
		if (tmp->value < min)
			min = tmp->value;
		tmp = tmp->next;
	}
	return min;
}

static int cw_next_min(t_stack *stack, int min)
{
	int next_min;
	t_node *tmp;
	
	next_min = INT_MAX;
	tmp = stack->top;
	while(tmp)
	{
		if((tmp->index == 0) && tmp->value > min && tmp->value < next_min)
				next_min = tmp->value;
		tmp = tmp->next;
	}
	return next_min; 
}

void cw_sort_index(t_stack *stack)
{
	t_node *tmp;
	int min;
	int i;

	i = 1;
	min = cw_get_min(stack);
	while(min!= INT_MAX)
	{	
		tmp = stack->top;
		while(tmp)
		{
			if (tmp->value == min && tmp->index == 0)
			{
				tmp->index = i;
				i++;
			}
			tmp = tmp->next;
		}
		min = cw_next_min(stack, min);
	}
}