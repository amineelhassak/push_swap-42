#include "../../includes/headers.h"

void cw_move_to_stack_a(t_stack *stack_a, t_stack *stack_b)//
{
    int max_a;//
    int index;
    int check;
    
    check = 0;
    max_a = stack_a->tail->index;
    while (stack_b->len)
    {
        index = cw_search_position_max(stack_b, stack_a->top->index -1);
        if (index == 2)
            cw_push_from_up(stack_a, stack_b,max_a, &check);
        else if(index == 1)
            cw_push_from_lo(stack_a, stack_b,max_a, &check);
        while (stack_a->tail->index == stack_a->top->index - 1)
            rra(stack_a,1);
    }
}
