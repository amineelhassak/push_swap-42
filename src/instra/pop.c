#include "../../includes/headers.h"

void cw_pop(t_stack *stack)
{
    t_node *new_top;
    if (stack->top)
    {
        new_top = stack->top->next;
        free(stack->top);
        stack->top = new_top;
    }
}