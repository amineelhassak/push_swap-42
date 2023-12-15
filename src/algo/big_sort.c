#include "../../includes/headers.h"

void cw_big_sort(t_stack *stack_a,t_stack *stack_b)
{
	cw_move_to_stack_b(stack_a, stack_b);
	cw_small_sort(stack_a);
	cw_move_to_stack_a(stack_a,stack_b);
}