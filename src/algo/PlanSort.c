#include "../../includes/headers.h"

void cw_select_sort_methode(t_stack *stack_a,t_stack *stack_b)
{
	if (stack_a->len == 2)
		cw_sa(stack_a);
	else if(stack_a->len == 3)
		cw_small_sort(stack_a);
	else
		cw_big_sort(stack_a,stack_b);
}