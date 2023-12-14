#include "../../includes/headers.h"

void cw_big_sort(t_stack *stack_a,t_stack *stack_b)
{
	// printf("this ' s stack-a\n");
	// exit(0);
	cw_move_to_stack_b(stack_a, stack_b);
	cw_small_sort(stack_a);
	cw_move_to_stack_a(stack_a,stack_b);
	// cw_display(stack_a);
	// printf("------------\n");
	// cw_display(stack_b);
	// cw_small_sort(stack_a);
	// while (stack_b->len > 0)
	// {
		// cw_search_position(stack_a,stack_b);
		// cw_cal_move_final(stack_a, stack_b);
		// new_fun(stack_a,stack_b);
		
	// }	
	// cw_search_position(stack_a, stack_b);
}