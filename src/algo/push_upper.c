#include "../../includes/headers.h"

void cw_push_from_up(t_stack *stack_a, t_stack *stack_b, int max_a, int *check)
{
    while (stack_b->top->index != stack_a->top->index - 1)
    {
        if (!*check || stack_b->top->index > stack_a->tail->index)
        {
            pa(stack_a, stack_b,1);
            ra(stack_a,1);
            (*check) = 1;
        }
        else
            rb(stack_b,1);
        if (stack_a->tail->index == max_a)
            (*check) = 0;
    }
    pa(stack_a, stack_b,1);
}