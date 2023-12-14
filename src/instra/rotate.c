#include "../../includes/headers.h"

void cw_rotate(t_stack *stack)
{
    t_node *oldtop;

    if (stack->top && stack->top->next)
    {
        oldtop = stack->top;
        stack->top = stack->top->next;
        stack->tail->next = oldtop;
        stack->tail = oldtop;
        stack->tail->next = NULL;
    }
}