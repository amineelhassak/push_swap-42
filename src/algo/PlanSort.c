#include "../../includes/headers.h"

void cw_select_sort_methode(t_stack *stack_a,t_stack *stack_b)
{
	if (stack_a->len == 2)
		sa(stack_a);
	else if(stack_a->len == 3)
		cw_small_sort(stack_a);
	else if(stack_a->len == 4 || stack_a->len == 5)
		cw_mid_sort(stack_a,stack_b);
	else
		cw_big_sort(stack_a,stack_b);
}