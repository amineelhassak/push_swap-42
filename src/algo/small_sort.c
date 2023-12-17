#include "../../includes/headers.h"

void cw_small_sort(t_stack *stack)
{
	int max_index;
	
	max_index = cw_max_index(stack);
	if (stack->top->next->index == max_index)
		rra(stack,1);
	else if(stack->top->index == max_index)
		ra(stack,1);
	if(stack->top->index > stack->top->next->index)
		sa(stack,1);
}