#include "../../includes/headers.h"

void cw_small_sort(t_stack *stack)
{
	int max_index;
	
	max_index = cw_max_index(stack);
	if (stack->top->next->index == max_index)
		cw_rra(stack);
	else if(stack->top->index == max_index)
		cw_ra(stack);
	if(stack->top->index > stack->top->next->index)
		cw_sa(stack);
}