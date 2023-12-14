#include "../../includes/headers.h"

void cw_swap(t_stack *stack)
{
    t_node *tmp;

    tmp = stack->top->next;
    if (stack->top && stack->top->next)
    {
        stack->top->next = stack->top->next->next;
        tmp->next = stack->top;
        stack->top = tmp;
    }
}
